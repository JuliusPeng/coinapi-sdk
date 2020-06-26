{-
   OMS - REST API
   Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. ###Lifecycle Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackham. ###Lifecycle 2 Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackhama. 

   The version of the OpenAPI document: v1

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.NewOrder exposing (NewOrder, Side(..), OrderType(..), ExecInst(..), decoder, encode, encodeWithTag, toString)

import Data.TimeInForce as TimeInForce exposing (TimeInForce)
import DateOnly exposing (DateOnly)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias NewOrder =
    { exchangeId : Maybe (String)
    , clientOrderId : Maybe (String)
    , symbolExchange : Maybe (String)
    , symbolCoinapi : Maybe (String)
    , amountOrder : Maybe (Float)
    , price : Maybe (Float)
    , side : Maybe (Side)
    , orderType : Maybe (OrderType)
    , timeInForce : Maybe (TimeInForce)
    , expireTime : Maybe (DateOnly)
    , execInst : Maybe ((List ExecInst))
    }


type Side
    = BUY
    | SELL



type OrderType
    = LIMIT



type ExecInst
    = MAKERORCANCEL



decoder : Decoder NewOrder
decoder =
    Decode.succeed NewOrder
        |> optional "exchange_id" (Decode.nullable Decode.string) Nothing
        |> optional "client_order_id" (Decode.nullable Decode.string) Nothing
        |> optional "symbol_exchange" (Decode.nullable Decode.string) Nothing
        |> optional "symbol_coinapi" (Decode.nullable Decode.string) Nothing
        |> optional "amount_order" (Decode.nullable Decode.float) Nothing
        |> optional "price" (Decode.nullable Decode.float) Nothing
        |> optional "side" (Decode.nullable sideDecoder) Nothing
        |> optional "order_type" (Decode.nullable orderTypeDecoder) Nothing
        |> optional "time_in_force" (Decode.nullable TimeInForce.decoder) Nothing
        |> optional "expire_time" (Decode.nullable DateOnly.decoder) Nothing
        |> optional "exec_inst" (Decode.nullable (Decode.list execInstDecoder)) Nothing



encode : NewOrder -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> NewOrder -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : NewOrder -> List (String, Encode.Value)
encodePairs model =
    [ ( "exchange_id", Maybe.withDefault Encode.null (Maybe.map Encode.string model.exchangeId) )
    , ( "client_order_id", Maybe.withDefault Encode.null (Maybe.map Encode.string model.clientOrderId) )
    , ( "symbol_exchange", Maybe.withDefault Encode.null (Maybe.map Encode.string model.symbolExchange) )
    , ( "symbol_coinapi", Maybe.withDefault Encode.null (Maybe.map Encode.string model.symbolCoinapi) )
    , ( "amount_order", Maybe.withDefault Encode.null (Maybe.map Encode.float model.amountOrder) )
    , ( "price", Maybe.withDefault Encode.null (Maybe.map Encode.float model.price) )
    , ( "side", Maybe.withDefault Encode.null (Maybe.map encodeSide model.side) )
    , ( "order_type", Maybe.withDefault Encode.null (Maybe.map encodeOrderType model.orderType) )
    , ( "time_in_force", Maybe.withDefault Encode.null (Maybe.map TimeInForce.encode model.timeInForce) )
    , ( "expire_time", Maybe.withDefault Encode.null (Maybe.map DateOnly.encode model.expireTime) )
    , ( "exec_inst", Maybe.withDefault Encode.null (Maybe.map (Encode.list encodeExecInst) model.execInst) )
    ]



toString : NewOrder -> String
toString =
    Encode.encode 0 << encode




sideDecoder : Decoder Side
sideDecoder =
    Decode.string
        |> Decode.andThen
            (\str ->
                case str of
                    "BUY" ->
                        Decode.succeed BUY

                    "SELL" ->
                        Decode.succeed SELL

                    other ->
                        Decode.fail <| "Unknown type: " ++ other
            )



encodeSide : Side -> Encode.Value
encodeSide model =
    case model of
        BUY ->
            Encode.string "BUY"

        SELL ->
            Encode.string "SELL"




orderTypeDecoder : Decoder OrderType
orderTypeDecoder =
    Decode.string
        |> Decode.andThen
            (\str ->
                case str of
                    "LIMIT" ->
                        Decode.succeed LIMIT

                    other ->
                        Decode.fail <| "Unknown type: " ++ other
            )



encodeOrderType : OrderType -> Encode.Value
encodeOrderType model =
    case model of
        LIMIT ->
            Encode.string "LIMIT"




execInstDecoder : Decoder ExecInst
execInstDecoder =
    Decode.string
        |> Decode.andThen
            (\str ->
                case str of
                    "MAKER_OR_CANCEL" ->
                        Decode.succeed MAKERORCANCEL

                    other ->
                        Decode.fail <| "Unknown type: " ++ other
            )



encodeExecInst : ExecInst -> Encode.Value
encodeExecInst model =
    case model of
        MAKERORCANCEL ->
            Encode.string "MAKER_OR_CANCEL"




