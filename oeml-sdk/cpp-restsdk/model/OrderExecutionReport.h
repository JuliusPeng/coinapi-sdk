/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OrderExecutionReport.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrderExecutionReport_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrderExecutionReport_H_


#include "../ModelBase.h"

#include "NewOrderSingle.h"
#include "OrdSide.h"
#include "OrderExecutionReport_allOf.h"
#include "OrdType.h"
#include <cpprest/details/basic_types.h>
#include "TimeInForce.h"
#include <vector>
#include "OrdStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  OrderExecutionReport
    : public ModelBase
{
public:
    OrderExecutionReport();
    virtual ~OrderExecutionReport();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrderExecutionReport members

    /// <summary>
    /// Exchange identifier.
    /// </summary>
    utility::string_t getExchangeId() const;
    bool exchangeIdIsSet() const;
    void unsetExchange_id();

    void setExchangeId(const utility::string_t& value);

    /// <summary>
    /// The unique identifier of the order assigned by the client.
    /// </summary>
    utility::string_t getClientOrderId() const;
    bool clientOrderIdIsSet() const;
    void unsetClient_order_id();

    void setClientOrderId(const utility::string_t& value);

    /// <summary>
    /// Exchange symbol. One of the properties (&#x60;symbol_exchange&#x60;, &#x60;symbol_coinapi&#x60;) is required to identify the market for the new order.
    /// </summary>
    utility::string_t getSymbolExchange() const;
    bool symbolExchangeIsSet() const;
    void unsetSymbol_exchange();

    void setSymbolExchange(const utility::string_t& value);

    /// <summary>
    /// CoinAPI symbol. One of the properties (&#x60;symbol_exchange&#x60;, &#x60;symbol_coinapi&#x60;) is required to identify the market for the new order.
    /// </summary>
    utility::string_t getSymbolCoinapi() const;
    bool symbolCoinapiIsSet() const;
    void unsetSymbol_coinapi();

    void setSymbolCoinapi(const utility::string_t& value);

    /// <summary>
    /// Order quantity.
    /// </summary>
    double getAmountOrder() const;
    bool amountOrderIsSet() const;
    void unsetAmount_order();

    void setAmountOrder(double value);

    /// <summary>
    /// Order price.
    /// </summary>
    double getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();

    void setPrice(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OrdSide> getSide() const;
    bool sideIsSet() const;
    void unsetSide();

    void setSide(const std::shared_ptr<OrdSide>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OrdType> getOrderType() const;
    bool orderTypeIsSet() const;
    void unsetOrder_type();

    void setOrderType(const std::shared_ptr<OrdType>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TimeInForce> getTimeInForce() const;
    bool timeInForceIsSet() const;
    void unsetTime_in_force();

    void setTimeInForce(const std::shared_ptr<TimeInForce>& value);

    /// <summary>
    /// Expiration time. Conditionaly required for orders with time_in_force &#x3D; &#x60;GOOD_TILL_TIME_EXCHANGE&#x60; or &#x60;GOOD_TILL_TIME_OEML&#x60;.
    /// </summary>
    std::shared_ptr<utility::datetime> getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetExpire_time();

    void setExpireTime(const std::shared_ptr<utility::datetime>& value);

    /// <summary>
    /// Order execution instructions are documented in the separate section: &lt;a href&#x3D;\&quot;#oeml-order-params-exec\&quot;&gt;OEML / Starter Guide / Order parameters / Execution instructions&lt;/a&gt; 
    /// </summary>
    std::vector<utility::string_t>& getExecInst();
    bool execInstIsSet() const;
    void unsetExec_inst();

    void setExecInst(const std::vector<utility::string_t>& value);

    /// <summary>
    /// The unique identifier of the order assigned by the client converted to the exchange order tag format for the purpose of tracking it.
    /// </summary>
    utility::string_t getClientOrderIdFormatExchange() const;
    bool clientOrderIdFormatExchangeIsSet() const;
    void unsetClient_order_id_format_exchange();

    void setClientOrderIdFormatExchange(const utility::string_t& value);

    /// <summary>
    /// The unique identifier of the order assigned by the exchange.
    /// </summary>
    utility::string_t getExchangeOrderId() const;
    bool exchangeOrderIdIsSet() const;
    void unsetExchange_order_id();

    void setExchangeOrderId(const utility::string_t& value);

    /// <summary>
    /// Amount open
    /// </summary>
    double getAmountOpen() const;
    bool amountOpenIsSet() const;
    void unsetAmount_open();

    void setAmountOpen(double value);

    /// <summary>
    /// Amount filled
    /// </summary>
    double getAmountFilled() const;
    bool amountFilledIsSet() const;
    void unsetAmount_filled();

    void setAmountFilled(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OrdStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<OrdStatus>& value);

    /// <summary>
    /// Timestamped history of order status changes.
    /// </summary>
    std::vector<std::vector<utility::string_t>>& getTimeOrder();
    bool timeOrderIsSet() const;
    void unsetTime_order();

    void setTimeOrder(const std::vector<std::vector<utility::string_t>>& value);

    /// <summary>
    /// Error message
    /// </summary>
    utility::string_t getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unsetError_message();

    void setErrorMessage(const utility::string_t& value);


protected:
    utility::string_t m_Exchange_id;
    bool m_Exchange_idIsSet;
    utility::string_t m_Client_order_id;
    bool m_Client_order_idIsSet;
    utility::string_t m_Symbol_exchange;
    bool m_Symbol_exchangeIsSet;
    utility::string_t m_Symbol_coinapi;
    bool m_Symbol_coinapiIsSet;
    double m_Amount_order;
    bool m_Amount_orderIsSet;
    double m_Price;
    bool m_PriceIsSet;
    std::shared_ptr<OrdSide> m_Side;
    bool m_SideIsSet;
    std::shared_ptr<OrdType> m_Order_type;
    bool m_Order_typeIsSet;
    std::shared_ptr<TimeInForce> m_Time_in_force;
    bool m_Time_in_forceIsSet;
    std::shared_ptr<utility::datetime> m_Expire_time;
    bool m_Expire_timeIsSet;
    std::vector<utility::string_t> m_Exec_inst;
    bool m_Exec_instIsSet;
    utility::string_t m_Client_order_id_format_exchange;
    bool m_Client_order_id_format_exchangeIsSet;
    utility::string_t m_Exchange_order_id;
    bool m_Exchange_order_idIsSet;
    double m_Amount_open;
    bool m_Amount_openIsSet;
    double m_Amount_filled;
    bool m_Amount_filledIsSet;
    std::shared_ptr<OrdStatus> m_Status;
    bool m_StatusIsSet;
    std::vector<std::vector<utility::string_t>> m_Time_order;
    bool m_Time_orderIsSet;
    utility::string_t m_Error_message;
    bool m_Error_messageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrderExecutionReport_H_ */
