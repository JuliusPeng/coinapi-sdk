-module(openapi_position_data).

-export([encode/1]).

-export_type([openapi_position_data/0]).

-type openapi_position_data() ::
    #{ 'symbol_exchange' => binary(),
       'symbol_coinapi' => binary(),
       'avg_entry_price' => integer(),
       'quantity' => integer(),
       'side' => openapi_ord_side:openapi_ord_side(),
       'unrealized_pnl' => integer(),
       'leverage' => integer(),
       'cross_margin' => boolean(),
       'liquidation_price' => integer(),
       'raw_data' => maps:map()
     }.

encode(#{ 'symbol_exchange' := SymbolExchange,
          'symbol_coinapi' := SymbolCoinapi,
          'avg_entry_price' := AvgEntryPrice,
          'quantity' := Quantity,
          'side' := Side,
          'unrealized_pnl' := UnrealizedPnl,
          'leverage' := Leverage,
          'cross_margin' := CrossMargin,
          'liquidation_price' := LiquidationPrice,
          'raw_data' := RawData
        }) ->
    #{ 'symbol_exchange' => SymbolExchange,
       'symbol_coinapi' => SymbolCoinapi,
       'avg_entry_price' => AvgEntryPrice,
       'quantity' => Quantity,
       'side' => Side,
       'unrealized_pnl' => UnrealizedPnl,
       'leverage' => Leverage,
       'cross_margin' => CrossMargin,
       'liquidation_price' => LiquidationPrice,
       'raw_data' => RawData
     }.
