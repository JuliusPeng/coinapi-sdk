{-
   OEML - REST API
   This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 

   The version of the OpenAPI document: v1
   Contact: support@coinapi.io

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Request.Orders exposing (v1OrdersCancelAllPost, v1OrdersCancelPost, v1OrdersGet, v1OrdersPost, v1OrdersStatusClientOrderIdGet)

import Data.NewOrderSingle as NewOrderSingle exposing (NewOrderSingle)
import Data.Message as Message exposing (Message)
import Data.CancelOrderAllRequest as CancelOrderAllRequest exposing (CancelOrderAllRequest)
import Data.CancelOrderSingleRequest as CancelOrderSingleRequest exposing (CancelOrderSingleRequest)
import Data.OrderExecutionReport as OrderExecutionReport exposing (OrderExecutionReport)
import Data.ValidationError as ValidationError exposing (ValidationError)
import Dict
import Http
import Json.Decode as Decode
import Url.Builder as Url




basePath : String
basePath =
    "http://localhost:8080"


{-| This request cancels all open orders on single specified exchange.
-}
v1OrdersCancelAllPost :
    { onSend : Result Http.Error Message -> msg


    , body : CancelOrderAllRequest


    }
    -> Cmd msg
v1OrdersCancelAllPost params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v1", "orders", "cancel", "all"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| CancelOrderAllRequest.encode params.body
        , expect = Http.expectJson params.onSend Message.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


{-| Request cancel for an existing order. The order can be canceled using the `client_order_id` or `exchange_order_id`.
-}
v1OrdersCancelPost :
    { onSend : Result Http.Error OrderExecutionReport -> msg


    , body : CancelOrderSingleRequest


    }
    -> Cmd msg
v1OrdersCancelPost params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v1", "orders", "cancel"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| CancelOrderSingleRequest.encode params.body
        , expect = Http.expectJson params.onSend OrderExecutionReport.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


{-| Get last execution reports for open orders across all or single exchange.
-}
v1OrdersGet :
    { onSend : Result Http.Error (List OrderExecutionReport) -> msg




    , exchangeId : Maybe (String)
    }
    -> Cmd msg
v1OrdersGet params =
    Http.request
        { method = "GET"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v1", "orders"]
            (List.filterMap identity [Maybe.map (Url.string "exchange_id" << identity) params.exchangeId])
        , body = Http.emptyBody
        , expect = Http.expectJson params.onSend (Decode.list OrderExecutionReport.decoder)
        , timeout = Just 30000
        , tracker = Nothing
        }


{-| This request creating new order for the specific exchange.
-}
v1OrdersPost :
    { onSend : Result Http.Error OrderExecutionReport -> msg


    , body : NewOrderSingle


    }
    -> Cmd msg
v1OrdersPost params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v1", "orders"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| NewOrderSingle.encode params.body
        , expect = Http.expectJson params.onSend OrderExecutionReport.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


{-| Get the last order execution report for the specified order. The requested order does not need to be active or opened.
-}
v1OrdersStatusClientOrderIdGet :
    { onSend : Result Http.Error OrderExecutionReport -> msg



    , clientOrderId : String

    }
    -> Cmd msg
v1OrdersStatusClientOrderIdGet params =
    Http.request
        { method = "GET"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v1", "orders", "status", identity params.clientOrderId]
            (List.filterMap identity [])
        , body = Http.emptyBody
        , expect = Http.expectJson params.onSend OrderExecutionReport.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }
