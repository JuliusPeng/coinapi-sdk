(ns oeml-rest-api.api.balances
  (:require [oeml-rest-api.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [oeml-rest-api.specs.time-in-force :refer :all]
            [oeml-rest-api.specs.order-data :refer :all]
            [oeml-rest-api.specs.balance-data :refer :all]
            [oeml-rest-api.specs.create-order400 :refer :all]
            [oeml-rest-api.specs.cancel-all-order :refer :all]
            [oeml-rest-api.specs.cancel-order :refer :all]
            [oeml-rest-api.specs.position-data :refer :all]
            [oeml-rest-api.specs.order-status :refer :all]
            [oeml-rest-api.specs.messages-info :refer :all]
            [oeml-rest-api.specs.balance :refer :all]
            [oeml-rest-api.specs.messages :refer :all]
            [oeml-rest-api.specs.order-live :refer :all]
            [oeml-rest-api.specs.position :refer :all]
            [oeml-rest-api.specs.new-order :refer :all]
            [oeml-rest-api.specs.order :refer :all]
            [oeml-rest-api.specs.messages-ok :refer :all]
            )
  (:import (java.io File)))


(defn-spec v1-balances-get-with-http-info any?
  "Get balances
  Returns all of your balances, including available balance."
  ([] (v1-balances-get-with-http-info nil))
  ([{:keys [exchange_id]} (s/map-of keyword? any?)]
   (call-api "/v1/balances" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"exchange_id" exchange_id }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    []})))

(defn-spec v1-balances-get (s/coll-of balance-spec)
  "Get balances
  Returns all of your balances, including available balance."
  ([] (v1-balances-get nil))
  ([optional-params any?]
   (let [res (:data (v1-balances-get-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of balance-spec) res st/string-transformer)
        res))))


