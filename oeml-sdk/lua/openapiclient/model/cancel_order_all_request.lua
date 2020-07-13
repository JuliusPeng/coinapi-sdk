--[[
  OEML - REST API
 
  This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
 
  The version of the OpenAPI document: v1
  Contact: support@coinapi.io
  Generated by: https://openapi-generator.tech
]]

-- cancel_order_all_request class
local cancel_order_all_request = {}
local cancel_order_all_request_mt = {
	__name = "cancel_order_all_request";
	__index = cancel_order_all_request;
}

local function cast_cancel_order_all_request(t)
	return setmetatable(t, cancel_order_all_request_mt)
end

local function new_cancel_order_all_request(exchange_id)
	return cast_cancel_order_all_request({
		["exchange_id"] = exchange_id;
	})
end

return {
	cast = cast_cancel_order_all_request;
	new = new_cancel_order_all_request;
}
