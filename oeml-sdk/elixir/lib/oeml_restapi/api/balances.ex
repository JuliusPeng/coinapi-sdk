# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OEML-RESTAPI.Api.Balances do
  @moduledoc """
  API calls for all endpoints tagged `Balances`.
  """

  alias OEML-RESTAPI.Connection
  import OEML-RESTAPI.RequestBuilder


  @doc """
  Get balances
  Get current currency balance from all or single exchange.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - opts (KeywordList): [optional] Optional parameters
    - :exchange_id (String.t): Filter the balances to the specific exchange.
  ## Returns

  {:ok, [%Balance{}, ...]} on success
  {:error, info} on failure
  """
  @spec v1_balances_get(Tesla.Env.client, keyword()) :: {:ok, list(OEML-RESTAPI.Model.Balance.t)} | {:error, Tesla.Env.t}
  def v1_balances_get(connection, opts \\ []) do
    optional_params = %{
      :"exchange_id" => :query
    }
    %{}
    |> method(:get)
    |> url("/v1/balances")
    |> add_optional_params(optional_params, opts)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, [%OEML-RESTAPI.Model.Balance{}]},
      { 490, %OEML-RESTAPI.Model.Message{}}
    ])
  end
end
