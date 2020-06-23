/**
 * OMS - REST API .
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Position_data.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Position_data::Position_data()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Symbol_exchange = utility::conversions::to_string_t("");
    m_Symbol_exchangeIsSet = false;
    m_Symbol_coinapi = utility::conversions::to_string_t("");
    m_Symbol_coinapiIsSet = false;
    m_Avg_entry_price = 0.0;
    m_Avg_entry_priceIsSet = false;
    m_Quantity = 0.0;
    m_QuantityIsSet = false;
    m_Is_buy = false;
    m_Is_buyIsSet = false;
    m_Unrealised_pn_l = 0.0;
    m_Unrealised_pn_lIsSet = false;
    m_Leverage = 0.0;
    m_LeverageIsSet = false;
    m_Cross_margin = false;
    m_Cross_marginIsSet = false;
    m_Liquidation_price = 0.0;
    m_Liquidation_priceIsSet = false;
    m_Raw_data = utility::conversions::to_string_t("");
    m_Raw_dataIsSet = false;
}

Position_data::~Position_data()
{
}

void Position_data::validate()
{
    // TODO: implement validation
}

web::json::value Position_data::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Symbol_exchangeIsSet)
    {
        val[utility::conversions::to_string_t("symbol_exchange")] = ModelBase::toJson(m_Symbol_exchange);
    }
    if(m_Symbol_coinapiIsSet)
    {
        val[utility::conversions::to_string_t("symbol_coinapi")] = ModelBase::toJson(m_Symbol_coinapi);
    }
    if(m_Avg_entry_priceIsSet)
    {
        val[utility::conversions::to_string_t("avg_entry_price")] = ModelBase::toJson(m_Avg_entry_price);
    }
    if(m_QuantityIsSet)
    {
        val[utility::conversions::to_string_t("quantity")] = ModelBase::toJson(m_Quantity);
    }
    if(m_Is_buyIsSet)
    {
        val[utility::conversions::to_string_t("is_buy")] = ModelBase::toJson(m_Is_buy);
    }
    if(m_Unrealised_pn_lIsSet)
    {
        val[utility::conversions::to_string_t("unrealised_pn_l")] = ModelBase::toJson(m_Unrealised_pn_l);
    }
    if(m_LeverageIsSet)
    {
        val[utility::conversions::to_string_t("leverage")] = ModelBase::toJson(m_Leverage);
    }
    if(m_Cross_marginIsSet)
    {
        val[utility::conversions::to_string_t("cross_margin")] = ModelBase::toJson(m_Cross_margin);
    }
    if(m_Liquidation_priceIsSet)
    {
        val[utility::conversions::to_string_t("liquidation_price")] = ModelBase::toJson(m_Liquidation_price);
    }
    if(m_Raw_dataIsSet)
    {
        val[utility::conversions::to_string_t("raw_data")] = ModelBase::toJson(m_Raw_data);
    }

    return val;
}

bool Position_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("avg_entry_price")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_entry_price"));
        if(!fieldValue.is_null())
        {
            double refVal_avg_entry_price;
            ok &= ModelBase::fromJson(fieldValue, refVal_avg_entry_price);
            setAvgEntryPrice(refVal_avg_entry_price);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quantity")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quantity"));
        if(!fieldValue.is_null())
        {
            double refVal_quantity;
            ok &= ModelBase::fromJson(fieldValue, refVal_quantity);
            setQuantity(refVal_quantity);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_buy")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_buy"));
        if(!fieldValue.is_null())
        {
            bool refVal_is_buy;
            ok &= ModelBase::fromJson(fieldValue, refVal_is_buy);
            setIsBuy(refVal_is_buy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unrealised_pn_l")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unrealised_pn_l"));
        if(!fieldValue.is_null())
        {
            double refVal_unrealised_pn_l;
            ok &= ModelBase::fromJson(fieldValue, refVal_unrealised_pn_l);
            setUnrealisedPnL(refVal_unrealised_pn_l);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leverage")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("leverage"));
        if(!fieldValue.is_null())
        {
            double refVal_leverage;
            ok &= ModelBase::fromJson(fieldValue, refVal_leverage);
            setLeverage(refVal_leverage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cross_margin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cross_margin"));
        if(!fieldValue.is_null())
        {
            bool refVal_cross_margin;
            ok &= ModelBase::fromJson(fieldValue, refVal_cross_margin);
            setCrossMargin(refVal_cross_margin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liquidation_price")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liquidation_price"));
        if(!fieldValue.is_null())
        {
            double refVal_liquidation_price;
            ok &= ModelBase::fromJson(fieldValue, refVal_liquidation_price);
            setLiquidationPrice(refVal_liquidation_price);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("raw_data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("raw_data"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_raw_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_raw_data);
            setRawData(refVal_raw_data);
        }
    }
    return ok;
}

void Position_data::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_Symbol_exchangeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol_exchange"), m_Symbol_exchange));
    }
    if(m_Symbol_coinapiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol_coinapi"), m_Symbol_coinapi));
    }
    if(m_Avg_entry_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("avg_entry_price"), m_Avg_entry_price));
    }
    if(m_QuantityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("quantity"), m_Quantity));
    }
    if(m_Is_buyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("is_buy"), m_Is_buy));
    }
    if(m_Unrealised_pn_lIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("unrealised_pn_l"), m_Unrealised_pn_l));
    }
    if(m_LeverageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("leverage"), m_Leverage));
    }
    if(m_Cross_marginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cross_margin"), m_Cross_margin));
    }
    if(m_Liquidation_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("liquidation_price"), m_Liquidation_price));
    }
    if(m_Raw_dataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("raw_data"), m_Raw_data));
    }
}

bool Position_data::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
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
    if(multipart->hasContent(utility::conversions::to_string_t("avg_entry_price")))
    {
        double refVal_avg_entry_price;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("avg_entry_price")), refVal_avg_entry_price );
        setAvgEntryPrice(refVal_avg_entry_price);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("quantity")))
    {
        double refVal_quantity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("quantity")), refVal_quantity );
        setQuantity(refVal_quantity);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("is_buy")))
    {
        bool refVal_is_buy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("is_buy")), refVal_is_buy );
        setIsBuy(refVal_is_buy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("unrealised_pn_l")))
    {
        double refVal_unrealised_pn_l;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("unrealised_pn_l")), refVal_unrealised_pn_l );
        setUnrealisedPnL(refVal_unrealised_pn_l);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("leverage")))
    {
        double refVal_leverage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("leverage")), refVal_leverage );
        setLeverage(refVal_leverage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cross_margin")))
    {
        bool refVal_cross_margin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cross_margin")), refVal_cross_margin );
        setCrossMargin(refVal_cross_margin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("liquidation_price")))
    {
        double refVal_liquidation_price;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("liquidation_price")), refVal_liquidation_price );
        setLiquidationPrice(refVal_liquidation_price);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("raw_data")))
    {
        utility::string_t refVal_raw_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("raw_data")), refVal_raw_data );
        setRawData(refVal_raw_data);
    }
    return ok;
}

utility::string_t Position_data::getId() const
{
    return m_Id;
}

void Position_data::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Position_data::idIsSet() const
{
    return m_IdIsSet;
}

void Position_data::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Position_data::getSymbolExchange() const
{
    return m_Symbol_exchange;
}

void Position_data::setSymbolExchange(const utility::string_t& value)
{
    m_Symbol_exchange = value;
    m_Symbol_exchangeIsSet = true;
}

bool Position_data::symbolExchangeIsSet() const
{
    return m_Symbol_exchangeIsSet;
}

void Position_data::unsetSymbol_exchange()
{
    m_Symbol_exchangeIsSet = false;
}
utility::string_t Position_data::getSymbolCoinapi() const
{
    return m_Symbol_coinapi;
}

void Position_data::setSymbolCoinapi(const utility::string_t& value)
{
    m_Symbol_coinapi = value;
    m_Symbol_coinapiIsSet = true;
}

bool Position_data::symbolCoinapiIsSet() const
{
    return m_Symbol_coinapiIsSet;
}

void Position_data::unsetSymbol_coinapi()
{
    m_Symbol_coinapiIsSet = false;
}
double Position_data::getAvgEntryPrice() const
{
    return m_Avg_entry_price;
}

void Position_data::setAvgEntryPrice(double value)
{
    m_Avg_entry_price = value;
    m_Avg_entry_priceIsSet = true;
}

bool Position_data::avgEntryPriceIsSet() const
{
    return m_Avg_entry_priceIsSet;
}

void Position_data::unsetAvg_entry_price()
{
    m_Avg_entry_priceIsSet = false;
}
double Position_data::getQuantity() const
{
    return m_Quantity;
}

void Position_data::setQuantity(double value)
{
    m_Quantity = value;
    m_QuantityIsSet = true;
}

bool Position_data::quantityIsSet() const
{
    return m_QuantityIsSet;
}

void Position_data::unsetQuantity()
{
    m_QuantityIsSet = false;
}
bool Position_data::isIsBuy() const
{
    return m_Is_buy;
}

void Position_data::setIsBuy(bool value)
{
    m_Is_buy = value;
    m_Is_buyIsSet = true;
}

bool Position_data::isBuyIsSet() const
{
    return m_Is_buyIsSet;
}

void Position_data::unsetIs_buy()
{
    m_Is_buyIsSet = false;
}
double Position_data::getUnrealisedPnL() const
{
    return m_Unrealised_pn_l;
}

void Position_data::setUnrealisedPnL(double value)
{
    m_Unrealised_pn_l = value;
    m_Unrealised_pn_lIsSet = true;
}

bool Position_data::unrealisedPnLIsSet() const
{
    return m_Unrealised_pn_lIsSet;
}

void Position_data::unsetUnrealised_pn_l()
{
    m_Unrealised_pn_lIsSet = false;
}
double Position_data::getLeverage() const
{
    return m_Leverage;
}

void Position_data::setLeverage(double value)
{
    m_Leverage = value;
    m_LeverageIsSet = true;
}

bool Position_data::leverageIsSet() const
{
    return m_LeverageIsSet;
}

void Position_data::unsetLeverage()
{
    m_LeverageIsSet = false;
}
bool Position_data::isCrossMargin() const
{
    return m_Cross_margin;
}

void Position_data::setCrossMargin(bool value)
{
    m_Cross_margin = value;
    m_Cross_marginIsSet = true;
}

bool Position_data::crossMarginIsSet() const
{
    return m_Cross_marginIsSet;
}

void Position_data::unsetCross_margin()
{
    m_Cross_marginIsSet = false;
}
double Position_data::getLiquidationPrice() const
{
    return m_Liquidation_price;
}

void Position_data::setLiquidationPrice(double value)
{
    m_Liquidation_price = value;
    m_Liquidation_priceIsSet = true;
}

bool Position_data::liquidationPriceIsSet() const
{
    return m_Liquidation_priceIsSet;
}

void Position_data::unsetLiquidation_price()
{
    m_Liquidation_priceIsSet = false;
}
utility::string_t Position_data::getRawData() const
{
    return m_Raw_data;
}

void Position_data::setRawData(const utility::string_t& value)
{
    m_Raw_data = value;
    m_Raw_dataIsSet = true;
}

bool Position_data::rawDataIsSet() const
{
    return m_Raw_dataIsSet;
}

void Position_data::unsetRaw_data()
{
    m_Raw_dataIsSet = false;
}
}
}
}
}

