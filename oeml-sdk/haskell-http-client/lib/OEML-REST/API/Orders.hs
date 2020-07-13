{-
   OEML - REST API

   This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 

   OpenAPI Version: 3.0.0
   OEML - REST API API version: v1
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
-- Cancel all orders
-- 
-- This request cancels all open orders across all or single specified exchange.
-- 
v1OrdersCancelAllPost 
  :: (Consumes V1OrdersCancelAllPost MimeJSON, MimeRender MimeJSON CancelOrderAllRequest)
  => CancelOrderAllRequest -- ^ "cancelOrderAllRequest"
  -> OEML-RESTRequest V1OrdersCancelAllPost MimeJSON Message MimeJSON
v1OrdersCancelAllPost cancelOrderAllRequest =
  _mkRequest "POST" ["/v1/orders/cancel/all"]
    `setBodyParam` cancelOrderAllRequest

data V1OrdersCancelAllPost 
instance HasBodyParam V1OrdersCancelAllPost CancelOrderAllRequest 

-- | @application/json@
instance Consumes V1OrdersCancelAllPost MimeJSON

-- | @application/json@
instance Produces V1OrdersCancelAllPost MimeJSON


-- *** v1OrdersCancelPost

-- | @POST \/v1\/orders\/cancel@
-- 
-- Cancel order
-- 
-- This request cancels an existing order. The order can be canceled by the client order ID or exchange order ID.
-- 
v1OrdersCancelPost 
  :: (Consumes V1OrdersCancelPost MimeJSON, MimeRender MimeJSON CancelOrderSingleRequest)
  => Accept accept -- ^ request accept ('MimeType')
  -> CancelOrderSingleRequest -- ^ "cancelOrderSingleRequest"
  -> OEML-RESTRequest V1OrdersCancelPost MimeJSON OrderExecutionReport accept
v1OrdersCancelPost  _ cancelOrderSingleRequest =
  _mkRequest "POST" ["/v1/orders/cancel"]
    `setBodyParam` cancelOrderSingleRequest

data V1OrdersCancelPost 
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
-- Get all orders
-- 
-- Get all current open orders across all or single specified exchange.
-- 
v1OrdersGet 
  :: OEML-RESTRequest V1OrdersGet MimeNoContent [OrderExecutionReport] MimeJSON
v1OrdersGet =
  _mkRequest "GET" ["/v1/orders"]

data V1OrdersGet  

-- | /Optional Param/ "exchange_id" - Filter the output to the orders from the specific exchange.
instance HasOptionalParam V1OrdersGet ExchangeId where
  applyOptionalParam req (ExchangeId xs) =
    req `setQuery` toQuery ("exchange_id", Just xs)
-- | @application/json@
instance Produces V1OrdersGet MimeJSON


-- *** v1OrdersPost

-- | @POST \/v1\/orders@
-- 
-- Create new order
-- 
-- This request creating new order for the specific exchange.
-- 
v1OrdersPost 
  :: (Consumes V1OrdersPost MimeJSON, MimeRender MimeJSON NewOrderSingle)
  => Accept accept -- ^ request accept ('MimeType')
  -> NewOrderSingle -- ^ "newOrderSingle"
  -> OEML-RESTRequest V1OrdersPost MimeJSON OrderExecutionReport accept
v1OrdersPost  _ newOrderSingle =
  _mkRequest "POST" ["/v1/orders"]
    `setBodyParam` newOrderSingle

data V1OrdersPost 
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
-- Get order status
-- 
-- Get the current order status for the specified order. The requested order can no longer be active.
-- 
v1OrdersStatusClientOrderIdGet 
  :: ClientOrderId -- ^ "clientOrderId" -  Order Client Id of the order for which the status is requested.
  -> OEML-RESTRequest V1OrdersStatusClientOrderIdGet MimeNoContent OrderExecutionReport MimeJSON
v1OrdersStatusClientOrderIdGet (ClientOrderId clientOrderId) =
  _mkRequest "GET" ["/v1/orders/status/",toPath clientOrderId]

data V1OrdersStatusClientOrderIdGet  
-- | @application/json@
instance Produces V1OrdersStatusClientOrderIdGet MimeJSON

