/**
 * OEML - REST API
 * Lorem2 Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. ###Lifecycle Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackham. ###Lifecycle 2 Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackhama. 
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Order_data.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Order_data::Order_data()
{
    m_Exchange_id = utility::conversions::to_string_t("");
    m_Exchange_idIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Client_order_id_format_exchange = utility::conversions::to_string_t("");
    m_Client_order_id_format_exchangeIsSet = false;
    m_Exchange_order_id = utility::conversions::to_string_t("");
    m_Exchange_order_idIsSet = false;
    m_Amount_open = 0.0;
    m_Amount_openIsSet = false;
    m_Amount_filled = 0.0;
    m_Amount_filledIsSet = false;
    m_StatusIsSet = false;
    m_Time_orderIsSet = false;
    m_Error_message = utility::conversions::to_string_t("");
    m_Error_messageIsSet = false;
    m_Client_order_id = utility::conversions::to_string_t("");
    m_Client_order_idIsSet = false;
    m_Symbol_exchange = utility::conversions::to_string_t("");
    m_Symbol_exchangeIsSet = false;
    m_Symbol_coinapi = utility::conversions::to_string_t("");
    m_Symbol_coinapiIsSet = false;
    m_Amount_order = 0.0;
    m_Amount_orderIsSet = false;
    m_Price = 0.0;
    m_PriceIsSet = false;
    m_Side = utility::conversions::to_string_t("");
    m_SideIsSet = false;
    m_Order_type = utility::conversions::to_string_t("");
    m_Order_typeIsSet = false;
    m_Time_in_forceIsSet = false;
    m_Expire_timeIsSet = false;
    m_Exec_instIsSet = false;
}

Order_data::~Order_data()
{
}

void Order_data::validate()
{
    // TODO: implement validation
}

web::json::value Order_data::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Exchange_idIsSet)
    {
        val[utility::conversions::to_string_t("exchange_id")] = ModelBase::toJson(m_Exchange_id);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Client_order_id_format_exchangeIsSet)
    {
        val[utility::conversions::to_string_t("client_order_id_format_exchange")] = ModelBase::toJson(m_Client_order_id_format_exchange);
    }
    if(m_Exchange_order_idIsSet)
    {
        val[utility::conversions::to_string_t("exchange_order_id")] = ModelBase::toJson(m_Exchange_order_id);
    }
    if(m_Amount_openIsSet)
    {
        val[utility::conversions::to_string_t("amount_open")] = ModelBase::toJson(m_Amount_open);
    }
    if(m_Amount_filledIsSet)
    {
        val[utility::conversions::to_string_t("amount_filled")] = ModelBase::toJson(m_Amount_filled);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_Time_orderIsSet)
    {
        val[utility::conversions::to_string_t("time_order")] = ModelBase::toJson(m_Time_order);
    }
    if(m_Error_messageIsSet)
    {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(m_Error_message);
    }
    if(m_Client_order_idIsSet)
    {
        val[utility::conversions::to_string_t("client_order_id")] = ModelBase::toJson(m_Client_order_id);
    }
    if(m_Symbol_exchangeIsSet)
    {
        val[utility::conversions::to_string_t("symbol_exchange")] = ModelBase::toJson(m_Symbol_exchange);
    }
    if(m_Symbol_coinapiIsSet)
    {
        val[utility::conversions::to_string_t("symbol_coinapi")] = ModelBase::toJson(m_Symbol_coinapi);
    }
    if(m_Amount_orderIsSet)
    {
        val[utility::conversions::to_string_t("amount_order")] = ModelBase::toJson(m_Amount_order);
    }
    if(m_PriceIsSet)
    {
        val[utility::conversions::to_string_t("price")] = ModelBase::toJson(m_Price);
    }
    if(m_SideIsSet)
    {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(m_Side);
    }
    if(m_Order_typeIsSet)
    {
        val[utility::conversions::to_string_t("order_type")] = ModelBase::toJson(m_Order_type);
    }
    if(m_Time_in_forceIsSet)
    {
        val[utility::conversions::to_string_t("time_in_force")] = ModelBase::toJson(m_Time_in_force);
    }
    if(m_Expire_timeIsSet)
    {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(m_Expire_time);
    }
    if(m_Exec_instIsSet)
    {
        val[utility::conversions::to_string_t("exec_inst")] = ModelBase::toJson(m_Exec_inst);
    }

    return val;
}

bool Order_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exchange_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exchange_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_exchange_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_exchange_id);
            setExchangeId(refVal_exchange_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_order_id_format_exchange")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_order_id_format_exchange"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_client_order_id_format_exchange;
            ok &= ModelBase::fromJson(fieldValue, refVal_client_order_id_format_exchange);
            setClientOrderIdFormatExchange(refVal_client_order_id_format_exchange);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exchange_order_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exchange_order_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_exchange_order_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_exchange_order_id);
            setExchangeOrderId(refVal_exchange_order_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount_open")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount_open"));
        if(!fieldValue.is_null())
        {
            double refVal_amount_open;
            ok &= ModelBase::fromJson(fieldValue, refVal_amount_open);
            setAmountOpen(refVal_amount_open);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount_filled")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount_filled"));
        if(!fieldValue.is_null())
        {
            double refVal_amount_filled;
            ok &= ModelBase::fromJson(fieldValue, refVal_amount_filled);
            setAmountFilled(refVal_amount_filled);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<OrderStatus> refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_order")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_order"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<utility::string_t>> refVal_time_order;
            ok &= ModelBase::fromJson(fieldValue, refVal_time_order);
            setTimeOrder(refVal_time_order);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_error_message;
            ok &= ModelBase::fromJson(fieldValue, refVal_error_message);
            setErrorMessage(refVal_error_message);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_order_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_order_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_client_order_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_client_order_id);
            setClientOrderId(refVal_client_order_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("symbol_exchange")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("symbol_exchange"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_symbol_exchange;
            ok &= ModelBase::fromJson(fieldValue, refVal_symbol_exchange);
            setSymbolExchange(refVal_symbol_exchange);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("symbol_coinapi")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("symbol_coinapi"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_symbol_coinapi;
            ok &= ModelBase::fromJson(fieldValue, refVal_symbol_coinapi);
            setSymbolCoinapi(refVal_symbol_coinapi);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount_order")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount_order"));
        if(!fieldValue.is_null())
        {
            double refVal_amount_order;
            ok &= ModelBase::fromJson(fieldValue, refVal_amount_order);
            setAmountOrder(refVal_amount_order);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("price")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("price"));
        if(!fieldValue.is_null())
        {
            double refVal_price;
            ok &= ModelBase::fromJson(fieldValue, refVal_price);
            setPrice(refVal_price);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("side")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("side"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_side;
            ok &= ModelBase::fromJson(fieldValue, refVal_side);
            setSide(refVal_side);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_order_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_order_type);
            setOrderType(refVal_order_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_in_force")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_in_force"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TimeInForce> refVal_time_in_force;
            ok &= ModelBase::fromJson(fieldValue, refVal_time_in_force);
            setTimeInForce(refVal_time_in_force);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<utility::datetime> refVal_expire_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_expire_time);
            setExpireTime(refVal_expire_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exec_inst")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_inst"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_exec_inst;
            ok &= ModelBase::fromJson(fieldValue, refVal_exec_inst);
            setExecInst(refVal_exec_inst);
        }
    }
    return ok;
}

void Order_data::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Exchange_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exchange_id"), m_Exchange_id));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_Client_order_id_format_exchangeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("client_order_id_format_exchange"), m_Client_order_id_format_exchange));
    }
    if(m_Exchange_order_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exchange_order_id"), m_Exchange_order_id));
    }
    if(m_Amount_openIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount_open"), m_Amount_open));
    }
    if(m_Amount_filledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount_filled"), m_Amount_filled));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_Time_orderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("time_order"), m_Time_order));
    }
    if(m_Error_messageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("error_message"), m_Error_message));
    }
    if(m_Client_order_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("client_order_id"), m_Client_order_id));
    }
    if(m_Symbol_exchangeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol_exchange"), m_Symbol_exchange));
    }
    if(m_Symbol_coinapiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol_coinapi"), m_Symbol_coinapi));
    }
    if(m_Amount_orderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount_order"), m_Amount_order));
    }
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("price"), m_Price));
    }
    if(m_SideIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("side"), m_Side));
    }
    if(m_Order_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_type"), m_Order_type));
    }
    if(m_Time_in_forceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("time_in_force"), m_Time_in_force));
    }
    if(m_Expire_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expire_time"), m_Expire_time));
    }
    if(m_Exec_instIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exec_inst"), m_Exec_inst));
    }
}

bool Order_data::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("exchange_id")))
    {
        utility::string_t refVal_exchange_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exchange_id")), refVal_exchange_id );
        setExchangeId(refVal_exchange_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("client_order_id_format_exchange")))
    {
        utility::string_t refVal_client_order_id_format_exchange;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("client_order_id_format_exchange")), refVal_client_order_id_format_exchange );
        setClientOrderIdFormatExchange(refVal_client_order_id_format_exchange);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("exchange_order_id")))
    {
        utility::string_t refVal_exchange_order_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exchange_order_id")), refVal_exchange_order_id );
        setExchangeOrderId(refVal_exchange_order_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("amount_open")))
    {
        double refVal_amount_open;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount_open")), refVal_amount_open );
        setAmountOpen(refVal_amount_open);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("amount_filled")))
    {
        double refVal_amount_filled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount_filled")), refVal_amount_filled );
        setAmountFilled(refVal_amount_filled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        std::shared_ptr<OrderStatus> refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("time_order")))
    {
        std::vector<std::vector<utility::string_t>> refVal_time_order;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("time_order")), refVal_time_order );
        setTimeOrder(refVal_time_order);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("error_message")))
    {
        utility::string_t refVal_error_message;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("error_message")), refVal_error_message );
        setErrorMessage(refVal_error_message);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("client_order_id")))
    {
        utility::string_t refVal_client_order_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("client_order_id")), refVal_client_order_id );
        setClientOrderId(refVal_client_order_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("symbol_exchange")))
    {
        utility::string_t refVal_symbol_exchange;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("symbol_exchange")), refVal_symbol_exchange );
        setSymbolExchange(refVal_symbol_exchange);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("symbol_coinapi")))
    {
        utility::string_t refVal_symbol_coinapi;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("symbol_coinapi")), refVal_symbol_coinapi );
        setSymbolCoinapi(refVal_symbol_coinapi);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("amount_order")))
    {
        double refVal_amount_order;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount_order")), refVal_amount_order );
        setAmountOrder(refVal_amount_order);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("price")))
    {
        double refVal_price;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("price")), refVal_price );
        setPrice(refVal_price);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("side")))
    {
        utility::string_t refVal_side;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("side")), refVal_side );
        setSide(refVal_side);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order_type")))
    {
        utility::string_t refVal_order_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_type")), refVal_order_type );
        setOrderType(refVal_order_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("time_in_force")))
    {
        std::shared_ptr<TimeInForce> refVal_time_in_force;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("time_in_force")), refVal_time_in_force );
        setTimeInForce(refVal_time_in_force);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("expire_time")))
    {
        std::shared_ptr<utility::datetime> refVal_expire_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("expire_time")), refVal_expire_time );
        setExpireTime(refVal_expire_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("exec_inst")))
    {
        std::vector<utility::string_t> refVal_exec_inst;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exec_inst")), refVal_exec_inst );
        setExecInst(refVal_exec_inst);
    }
    return ok;
}

utility::string_t Order_data::getExchangeId() const
{
    return m_Exchange_id;
}

void Order_data::setExchangeId(const utility::string_t& value)
{
    m_Exchange_id = value;
    m_Exchange_idIsSet = true;
}

bool Order_data::exchangeIdIsSet() const
{
    return m_Exchange_idIsSet;
}

void Order_data::unsetExchange_id()
{
    m_Exchange_idIsSet = false;
}
utility::string_t Order_data::getId() const
{
    return m_Id;
}

void Order_data::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Order_data::idIsSet() const
{
    return m_IdIsSet;
}

void Order_data::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Order_data::getClientOrderIdFormatExchange() const
{
    return m_Client_order_id_format_exchange;
}

void Order_data::setClientOrderIdFormatExchange(const utility::string_t& value)
{
    m_Client_order_id_format_exchange = value;
    m_Client_order_id_format_exchangeIsSet = true;
}

bool Order_data::clientOrderIdFormatExchangeIsSet() const
{
    return m_Client_order_id_format_exchangeIsSet;
}

void Order_data::unsetClient_order_id_format_exchange()
{
    m_Client_order_id_format_exchangeIsSet = false;
}
utility::string_t Order_data::getExchangeOrderId() const
{
    return m_Exchange_order_id;
}

void Order_data::setExchangeOrderId(const utility::string_t& value)
{
    m_Exchange_order_id = value;
    m_Exchange_order_idIsSet = true;
}

bool Order_data::exchangeOrderIdIsSet() const
{
    return m_Exchange_order_idIsSet;
}

void Order_data::unsetExchange_order_id()
{
    m_Exchange_order_idIsSet = false;
}
double Order_data::getAmountOpen() const
{
    return m_Amount_open;
}

void Order_data::setAmountOpen(double value)
{
    m_Amount_open = value;
    m_Amount_openIsSet = true;
}

bool Order_data::amountOpenIsSet() const
{
    return m_Amount_openIsSet;
}

void Order_data::unsetAmount_open()
{
    m_Amount_openIsSet = false;
}
double Order_data::getAmountFilled() const
{
    return m_Amount_filled;
}

void Order_data::setAmountFilled(double value)
{
    m_Amount_filled = value;
    m_Amount_filledIsSet = true;
}

bool Order_data::amountFilledIsSet() const
{
    return m_Amount_filledIsSet;
}

void Order_data::unsetAmount_filled()
{
    m_Amount_filledIsSet = false;
}
std::shared_ptr<OrderStatus> Order_data::getStatus() const
{
    return m_Status;
}

void Order_data::setStatus(const std::shared_ptr<OrderStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Order_data::statusIsSet() const
{
    return m_StatusIsSet;
}

void Order_data::unsetStatus()
{
    m_StatusIsSet = false;
}
std::vector<std::vector<utility::string_t>>& Order_data::getTimeOrder()
{
    return m_Time_order;
}

void Order_data::setTimeOrder(const std::vector<std::vector<utility::string_t>>& value)
{
    m_Time_order = value;
    m_Time_orderIsSet = true;
}

bool Order_data::timeOrderIsSet() const
{
    return m_Time_orderIsSet;
}

void Order_data::unsetTime_order()
{
    m_Time_orderIsSet = false;
}
utility::string_t Order_data::getErrorMessage() const
{
    return m_Error_message;
}

void Order_data::setErrorMessage(const utility::string_t& value)
{
    m_Error_message = value;
    m_Error_messageIsSet = true;
}

bool Order_data::errorMessageIsSet() const
{
    return m_Error_messageIsSet;
}

void Order_data::unsetError_message()
{
    m_Error_messageIsSet = false;
}
utility::string_t Order_data::getClientOrderId() const
{
    return m_Client_order_id;
}

void Order_data::setClientOrderId(const utility::string_t& value)
{
    m_Client_order_id = value;
    m_Client_order_idIsSet = true;
}

bool Order_data::clientOrderIdIsSet() const
{
    return m_Client_order_idIsSet;
}

void Order_data::unsetClient_order_id()
{
    m_Client_order_idIsSet = false;
}
utility::string_t Order_data::getSymbolExchange() const
{
    return m_Symbol_exchange;
}

void Order_data::setSymbolExchange(const utility::string_t& value)
{
    m_Symbol_exchange = value;
    m_Symbol_exchangeIsSet = true;
}

bool Order_data::symbolExchangeIsSet() const
{
    return m_Symbol_exchangeIsSet;
}

void Order_data::unsetSymbol_exchange()
{
    m_Symbol_exchangeIsSet = false;
}
utility::string_t Order_data::getSymbolCoinapi() const
{
    return m_Symbol_coinapi;
}

void Order_data::setSymbolCoinapi(const utility::string_t& value)
{
    m_Symbol_coinapi = value;
    m_Symbol_coinapiIsSet = true;
}

bool Order_data::symbolCoinapiIsSet() const
{
    return m_Symbol_coinapiIsSet;
}

void Order_data::unsetSymbol_coinapi()
{
    m_Symbol_coinapiIsSet = false;
}
double Order_data::getAmountOrder() const
{
    return m_Amount_order;
}

void Order_data::setAmountOrder(double value)
{
    m_Amount_order = value;
    m_Amount_orderIsSet = true;
}

bool Order_data::amountOrderIsSet() const
{
    return m_Amount_orderIsSet;
}

void Order_data::unsetAmount_order()
{
    m_Amount_orderIsSet = false;
}
double Order_data::getPrice() const
{
    return m_Price;
}

void Order_data::setPrice(double value)
{
    m_Price = value;
    m_PriceIsSet = true;
}

bool Order_data::priceIsSet() const
{
    return m_PriceIsSet;
}

void Order_data::unsetPrice()
{
    m_PriceIsSet = false;
}
utility::string_t Order_data::getSide() const
{
    return m_Side;
}

void Order_data::setSide(const utility::string_t& value)
{
    m_Side = value;
    m_SideIsSet = true;
}

bool Order_data::sideIsSet() const
{
    return m_SideIsSet;
}

void Order_data::unsetSide()
{
    m_SideIsSet = false;
}
utility::string_t Order_data::getOrderType() const
{
    return m_Order_type;
}

void Order_data::setOrderType(const utility::string_t& value)
{
    m_Order_type = value;
    m_Order_typeIsSet = true;
}

bool Order_data::orderTypeIsSet() const
{
    return m_Order_typeIsSet;
}

void Order_data::unsetOrder_type()
{
    m_Order_typeIsSet = false;
}
std::shared_ptr<TimeInForce> Order_data::getTimeInForce() const
{
    return m_Time_in_force;
}

void Order_data::setTimeInForce(const std::shared_ptr<TimeInForce>& value)
{
    m_Time_in_force = value;
    m_Time_in_forceIsSet = true;
}

bool Order_data::timeInForceIsSet() const
{
    return m_Time_in_forceIsSet;
}

void Order_data::unsetTime_in_force()
{
    m_Time_in_forceIsSet = false;
}
std::shared_ptr<utility::datetime> Order_data::getExpireTime() const
{
    return m_Expire_time;
}

void Order_data::setExpireTime(const std::shared_ptr<utility::datetime>& value)
{
    m_Expire_time = value;
    m_Expire_timeIsSet = true;
}

bool Order_data::expireTimeIsSet() const
{
    return m_Expire_timeIsSet;
}

void Order_data::unsetExpire_time()
{
    m_Expire_timeIsSet = false;
}
std::vector<utility::string_t>& Order_data::getExecInst()
{
    return m_Exec_inst;
}

void Order_data::setExecInst(const std::vector<utility::string_t>& value)
{
    m_Exec_inst = value;
    m_Exec_instIsSet = true;
}

bool Order_data::execInstIsSet() const
{
    return m_Exec_instIsSet;
}

void Order_data::unsetExec_inst()
{
    m_Exec_instIsSet = false;
}
}
}
}
}

