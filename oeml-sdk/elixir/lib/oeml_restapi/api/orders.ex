# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OEML-RESTAPI.Api.Orders do
  @moduledoc """
  API calls for all endpoints tagged `Orders`.
  """

  alias OEML-RESTAPI.Connection
  import OEML-RESTAPI.RequestBuilder


  @doc """
  Cancel all orders
  This request cancels all open orders across all or single specified exchange.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - cancel_order_all_request (CancelOrderAllRequest): 
  - opts (KeywordList): [optional] Optional parameters
  ## Returns

  {:ok, %OEML-RESTAPI.Model.Message{}} on success
  {:error, info} on failure
  """
  @spec v1_orders_cancel_all_post(Tesla.Env.client, OEML-RESTAPI.Model.CancelOrderAllRequest.t, keyword()) :: {:ok, OEML-RESTAPI.Model.Message.t} | {:error, Tesla.Env.t}
  def v1_orders_cancel_all_post(connection, cancel_order_all_request, _opts \\ []) do
    %{}
    |> method(:post)
    |> url("/v1/orders/cancel/all")
    |> add_param(:body, :body, cancel_order_all_request)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, %OEML-RESTAPI.Model.Message{}}
    ])
  end

  @doc """
  Cancel order
  This request cancels an existing order. The order can be canceled by the client order ID or exchange order ID.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - cancel_order_single_request (CancelOrderSingleRequest): 
  - opts (KeywordList): [optional] Optional parameters
  ## Returns

  {:ok, %OEML-RESTAPI.Model.OrderExecutionReport{}} on success
  {:error, info} on failure
  """
  @spec v1_orders_cancel_post(Tesla.Env.client, OEML-RESTAPI.Model.CancelOrderSingleRequest.t, keyword()) :: {:ok, OEML-RESTAPI.Model.OrderExecutionReport.t} | {:error, Tesla.Env.t}
  def v1_orders_cancel_post(connection, cancel_order_single_request, _opts \\ []) do
    %{}
    |> method(:post)
    |> url("/v1/orders/cancel")
    |> add_param(:body, :body, cancel_order_single_request)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, %OEML-RESTAPI.Model.OrderExecutionReport{}},
      { 400, %OEML-RESTAPI.Model.ValidationError{}},
      { 490, %OEML-RESTAPI.Model.Message{}}
    ])
  end

  @doc """
  Get all orders
  Get all current open orders across all or single specified exchange.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - opts (KeywordList): [optional] Optional parameters
    - :exchange_id (String.t): Filter the output to the orders from the specific exchange.
  ## Returns

  {:ok, [%OrderExecutionReport{}, ...]} on success
  {:error, info} on failure
  """
  @spec v1_orders_get(Tesla.Env.client, keyword()) :: {:ok, list(OEML-RESTAPI.Model.OrderExecutionReport.t)} | {:error, Tesla.Env.t}
  def v1_orders_get(connection, opts \\ []) do
    optional_params = %{
      :"exchange_id" => :query
    }
    %{}
    |> method(:get)
    |> url("/v1/orders")
    |> add_optional_params(optional_params, opts)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, [%OEML-RESTAPI.Model.OrderExecutionReport{}]}
    ])
  end

  @doc """
  Create new order
  This request creating new order for the specific exchange.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - new_order_single (NewOrderSingle): 
  - opts (KeywordList): [optional] Optional parameters
  ## Returns

  {:ok, %OEML-RESTAPI.Model.OrderExecutionReport{}} on success
  {:error, info} on failure
  """
  @spec v1_orders_post(Tesla.Env.client, OEML-RESTAPI.Model.NewOrderSingle.t, keyword()) :: {:ok, OEML-RESTAPI.Model.OrderExecutionReport.t} | {:error, Tesla.Env.t}
  def v1_orders_post(connection, new_order_single, _opts \\ []) do
    %{}
    |> method(:post)
    |> url("/v1/orders")
    |> add_param(:body, :body, new_order_single)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, %OEML-RESTAPI.Model.OrderExecutionReport{}},
      { 400, %OEML-RESTAPI.Model.ValidationError{}},
      { 490, %OEML-RESTAPI.Model.Message{}}
    ])
  end

  @doc """
  Get order status
  Get the current order status for the specified order. The requested order can no longer be active.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - client_order_id (String.t): The unique identifier of the order assigned by the client.
  - opts (KeywordList): [optional] Optional parameters
  ## Returns

  {:ok, %OEML-RESTAPI.Model.OrderExecutionReport{}} on success
  {:error, info} on failure
  """
  @spec v1_orders_status_client_order_id_get(Tesla.Env.client, String.t, keyword()) :: {:ok, OEML-RESTAPI.Model.OrderExecutionReport.t} | {:error, Tesla.Env.t}
  def v1_orders_status_client_order_id_get(connection, client_order_id, _opts \\ []) do
    %{}
    |> method(:get)
    |> url("/v1/orders/status/#{client_order_id}")
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, %OEML-RESTAPI.Model.OrderExecutionReport{}},
      { 400, %OEML-RESTAPI.Model.Message{}}
    ])
  end
end
