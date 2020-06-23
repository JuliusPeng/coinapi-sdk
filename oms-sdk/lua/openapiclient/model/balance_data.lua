--[[
  OMS - REST API .
 
  OMS Project
 
  The version of the OpenAPI document: v1
  
  Generated by: https://openapi-generator.tech
]]

-- balance_data class
local balance_data = {}
local balance_data_mt = {
	__name = "balance_data";
	__index = balance_data;
}

local function cast_balance_data(t)
	return setmetatable(t, balance_data_mt)
end

local function new_balance_data(id, symbol_exchange, symbol_coinapi, balance, available, locked, update_origin)
	return cast_balance_data({
		["id"] = id;
		["symbol_exchange"] = symbol_exchange;
		["symbol_coinapi"] = symbol_coinapi;
		["balance"] = balance;
		["available"] = available;
		["locked"] = locked;
		["update_origin"] = update_origin;
	})
end

return {
	cast = cast_balance_data;
	new = new_balance_data;
}