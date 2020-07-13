/*
 * Position_data.h
 *
 * 
 */

#ifndef _Position_data_H_
#define _Position_data_H_


#include <string>
#include "OrdSide.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Position_data : public Object {
public:
	/*! \brief Constructor.
	 */
	Position_data();
	Position_data(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Position_data();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Exchange symbol.
	 */
	std::string getSymbolExchange();

	/*! \brief Set Exchange symbol.
	 */
	void setSymbolExchange(std::string  symbol_exchange);
	/*! \brief Get CoinAPI symbol.
	 */
	std::string getSymbolCoinapi();

	/*! \brief Set CoinAPI symbol.
	 */
	void setSymbolCoinapi(std::string  symbol_coinapi);
	/*! \brief Get Calculated average price of all fills on this position.
	 */
	long long getAvgEntryPrice();

	/*! \brief Set Calculated average price of all fills on this position.
	 */
	void setAvgEntryPrice(long long  avg_entry_price);
	/*! \brief Get The current position quantity.
	 */
	long long getQuantity();

	/*! \brief Set The current position quantity.
	 */
	void setQuantity(long long  quantity);
	/*! \brief Get 
	 */
	OrdSide getSide();

	/*! \brief Set 
	 */
	void setSide(OrdSide  side);
	/*! \brief Get Unrealised profit or loss (PNL) of this position.
	 */
	long long getUnrealizedPnl();

	/*! \brief Set Unrealised profit or loss (PNL) of this position.
	 */
	void setUnrealizedPnl(long long  unrealized_pnl);
	/*! \brief Get Leverage for this position reported by the exchange.
	 */
	long long getLeverage();

	/*! \brief Set Leverage for this position reported by the exchange.
	 */
	void setLeverage(long long  leverage);
	/*! \brief Get Is cross margin mode enable for this position?
	 */
	bool getCrossMargin();

	/*! \brief Set Is cross margin mode enable for this position?
	 */
	void setCrossMargin(bool  cross_margin);
	/*! \brief Get Liquidation price. If mark price will reach this value, the position will be liquidated.
	 */
	long long getLiquidationPrice();

	/*! \brief Set Liquidation price. If mark price will reach this value, the position will be liquidated.
	 */
	void setLiquidationPrice(long long  liquidation_price);
	/*! \brief Get 
	 */
	std::string getRawData();

	/*! \brief Set 
	 */
	void setRawData(std::string  raw_data);

private:
	std::string symbol_exchange;
	std::string symbol_coinapi;
	long long avg_entry_price;
	long long quantity;
	OrdSide side;
	long long unrealized_pnl;
	long long leverage;
	bool cross_margin;
	long long liquidation_price;
	std::string raw_data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Position_data_H_ */
