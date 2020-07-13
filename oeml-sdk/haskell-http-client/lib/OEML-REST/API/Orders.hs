{-
   OEML - REST API

   This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 

   OpenAPI Version: 3.0.0
   OEML - REST API API version: v1
   Contact: support@coinapi.io
   Generated by OpenAPI Generator (https://openapi-generator.tech)
-}

{-|
Module : OEML-REST.API.Orders
-}

{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE MonoLocalBinds #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing -fno-warn-unused-binds -fno-warn-unused-imports #-}

module OEML-REST.API.Orders where

import OEML-REST.Core
import OEML-REST.MimeTypes
import OEML-REST.Model as M

import qualified Data.Aeson as A
import qualified Data.ByteString as B
import qualified Data.ByteString.Lazy as BL
import qualified Data.Data as P (Typeable, TypeRep, typeOf, typeRep)
import qualified Data.Foldable as P
import qualified Data.Map as Map
import qualified Data.Maybe as P
import qualified Data.Proxy as P (Proxy(..))
import qualified Data.Set as Set
import qualified Data.String as P
import qualified Data.Text as T
import qualified Data.Text.Encoding as T
import qualified Data.Text.Lazy as TL
import qualified Data.Text.Lazy.Encoding as TL
import qualified Data.Time as TI
import qualified Network.HTTP.Client.MultipartFormData as NH
import qualified Network.HTTP.Media as ME
import qualified Network.HTTP.Types as NH
import qualified Web.FormUrlEncoded as WH
import qualified Web.HttpApiData as WH

import Data.Text (Text)
import GHC.Base ((<|>))

import Prelude ((==),(/=),($), (.),(<$>),(<*>),(>>=),Maybe(..),Bool(..),Char,Double,FilePath,Float,Int,Integer,String,fmap,undefined,mempty,maybe,pure,Monad,Applicative,Functor)
import qualified Prelude as P

-- * Operations


-- ** Orders

-- *** v1OrdersCancelAllPost

-- | @POST \/v1\/orders\/cancel\/all@
-- 
-- Cancel all orders request
-- 
-- This request cancels all open orders on single specified exchange.
-- 
v1OrdersCancelAllPost 
  :: (Consumes V1OrdersCancelAllPost MimeJSON, MimeRender MimeJSON CancelOrderAllRequest)
  => Accept accept -- ^ request accept ('MimeType')
  -> CancelOrderAllRequest -- ^ "cancelOrderAllRequest" -  CancelOrderAllRequest object.
  -> OEML-RESTRequest V1OrdersCancelAllPost MimeJSON Message accept
v1OrdersCancelAllPost  _ cancelOrderAllRequest =
  _mkRequest "POST" ["/v1/orders/cancel/all"]
    `setBodyParam` cancelOrderAllRequest

data V1OrdersCancelAllPost 

-- | /Body Param/ "CancelOrderAllRequest" - CancelOrderAllRequest object.
instance HasBodyParam V1OrdersCancelAllPost CancelOrderAllRequest 

-- | @application/json@
instance Consumes V1OrdersCancelAllPost MimeJSON

-- | @application/json@
instance Produces V1OrdersCancelAllPost MimeJSON
-- | @appliction/json@
instance Produces V1OrdersCancelAllPost MimeApplictionJson


-- *** v1OrdersCancelPost

-- | @POST \/v1\/orders\/cancel@
-- 
-- Cancel order request
-- 
-- Request cancel for an existing order. The order can be canceled using the `client_order_id` or `exchange_order_id`.
-- 
v1OrdersCancelPost 
  :: (Consumes V1OrdersCancelPost MimeJSON, MimeRender MimeJSON CancelOrderSingleRequest)
  => Accept accept -- ^ request accept ('MimeType')
  -> CancelOrderSingleRequest -- ^ "cancelOrderSingleRequest" -  CancelOrderSingleRequest object.
  -> OEML-RESTRequest V1OrdersCancelPost MimeJSON OrderExecutionReport accept
v1OrdersCancelPost  _ cancelOrderSingleRequest =
  _mkRequest "POST" ["/v1/orders/cancel"]
    `setBodyParam` cancelOrderSingleRequest

data V1OrdersCancelPost 

-- | /Body Param/ "CancelOrderSingleRequest" - CancelOrderSingleRequest object.
instance HasBodyParam V1OrdersCancelPost CancelOrderSingleRequest 

-- | @application/json@
instance Consumes V1OrdersCancelPost MimeJSON

-- | @application/json@
instance Produces V1OrdersCancelPost MimeJSON
-- | @appliction/json@
instance Produces V1OrdersCancelPost MimeApplictionJson


-- *** v1OrdersGet

-- | @GET \/v1\/orders@
-- 
-- Get open orders
-- 
-- Get last execution reports for open orders across all or single exchange.
-- 
v1OrdersGet 
  :: Accept accept -- ^ request accept ('MimeType')
  -> OEML-RESTRequest V1OrdersGet MimeNoContent [OrderExecutionReport] accept
v1OrdersGet  _ =
  _mkRequest "GET" ["/v1/orders"]

data V1OrdersGet  

-- | /Optional Param/ "exchange_id" - Filter the open orders to the specific exchange.
instance HasOptionalParam V1OrdersGet ExchangeId where
  applyOptionalParam req (ExchangeId xs) =
    req `setQuery` toQuery ("exchange_id", Just xs)
-- | @application/json@
instance Produces V1OrdersGet MimeJSON
-- | @appliction/json@
instance Produces V1OrdersGet MimeApplictionJson


-- *** v1OrdersPost

-- | @POST \/v1\/orders@
-- 
-- Send new order
-- 
-- This request creating new order for the specific exchange.
-- 
v1OrdersPost 
  :: (Consumes V1OrdersPost MimeJSON, MimeRender MimeJSON NewOrderSingle)
  => Accept accept -- ^ request accept ('MimeType')
  -> NewOrderSingle -- ^ "newOrderSingle" -  NewOrderSingle object.
  -> OEML-RESTRequest V1OrdersPost MimeJSON OrderExecutionReport accept
v1OrdersPost  _ newOrderSingle =
  _mkRequest "POST" ["/v1/orders"]
    `setBodyParam` newOrderSingle

data V1OrdersPost 

-- | /Body Param/ "NewOrderSingle" - NewOrderSingle object.
instance HasBodyParam V1OrdersPost NewOrderSingle 

-- | @application/json@
instance Consumes V1OrdersPost MimeJSON

-- | @application/json@
instance Produces V1OrdersPost MimeJSON
-- | @appliction/json@
instance Produces V1OrdersPost MimeApplictionJson


-- *** v1OrdersStatusClientOrderIdGet

-- | @GET \/v1\/orders\/status\/{client_order_id}@
-- 
-- Get order execution report
-- 
-- Get the last order execution report for the specified order. The requested order does not need to be active or opened.
-- 
v1OrdersStatusClientOrderIdGet 
  :: ClientOrderId -- ^ "clientOrderId" -  The unique identifier of the order assigned by the client.
  -> OEML-RESTRequest V1OrdersStatusClientOrderIdGet MimeNoContent OrderExecutionReport MimeJSON
v1OrdersStatusClientOrderIdGet (ClientOrderId clientOrderId) =
  _mkRequest "GET" ["/v1/orders/status/",toPath clientOrderId]

data V1OrdersStatusClientOrderIdGet  
-- | @application/json@
instance Produces V1OrdersStatusClientOrderIdGet MimeJSON

