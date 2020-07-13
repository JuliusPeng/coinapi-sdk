/*
 * Balance_data.h
 *
 * 
 */

#ifndef _Balance_data_H_
#define _Balance_data_H_


#include <string>
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

class Balance_data : public Object {
public:
	/*! \brief Constructor.
	 */
	Balance_data();
	Balance_data(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Balance_data();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Exchange currency code.
	 */
	std::string getSymbolExchange();

	/*! \brief Set Exchange currency code.
	 */
	void setSymbolExchange(std::string  symbol_exchange);
	/*! \brief Get CoinAPI currency code.
	 */
	std::string getSymbolCoinapi();

	/*! \brief Set CoinAPI currency code.
	 */
	void setSymbolCoinapi(std::string  symbol_coinapi);
	/*! \brief Get Value of the current total currency balance on the exchange.
	 */
	float getBalance();

	/*! \brief Set Value of the current total currency balance on the exchange.
	 */
	void setBalance(float  balance);
	/*! \brief Get Value of the current available currency balance on the exchange that can be used as collateral.
	 */
	float getAvailable();

	/*! \brief Set Value of the current available currency balance on the exchange that can be used as collateral.
	 */
	void setAvailable(float  available);
	/*! \brief Get Value of the current locked currency balance by the exchange.
	 */
	float getLocked();

	/*! \brief Set Value of the current locked currency balance by the exchange.
	 */
	void setLocked(float  locked);
	/*! \brief Get Source of the last modification. 
	 */
	std::string getUpdateOrigin();

	/*! \brief Set Source of the last modification. 
	 */
	void setUpdateOrigin(std::string  update_origin);

private:
	std::string symbol_exchange;
	std::string symbol_coinapi;
	float balance;
	float available;
	float locked;
	std::string update_origin;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Balance_data_H_ */
