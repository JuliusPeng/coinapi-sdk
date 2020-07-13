(ns oeml-rest-api.specs.balance
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [oeml-rest-api.specs.balance-data :refer :all]
            )
  (:import (java.io File)))


(def balance-data
  {
   (ds/opt :exchange_id) string?
   (ds/opt :data) (s/coll-of balance-data-spec)
   })

(def balance-spec
  (ds/spec
    {:name ::balance
     :spec balance-data}))
