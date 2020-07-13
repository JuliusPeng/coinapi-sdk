--[[
  OEML - REST API
 
  This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
 
  The version of the OpenAPI document: v1
  
  Generated by: https://openapi-generator.tech
]]

-- create_order_validation_error class
local create_order_validation_error = {}
local create_order_validation_error_mt = {
	__name = "create_order_validation_error";
	__index = create_order_validation_error;
}

local function cast_create_order_validation_error(t)
	return setmetatable(t, create_order_validation_error_mt)
end

local function new_create_order_validation_error(type, title, status, trace_id, errors)
	return cast_create_order_validation_error({
		["type"] = type;
		["title"] = title;
		["status"] = status;
		["traceId"] = trace_id;
		["errors"] = errors;
	})
end

return {
	cast = cast_create_order_validation_error;
	new = new_create_order_validation_error;
}
