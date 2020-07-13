/*
 * Position.h
 *
 * 
 */

#ifndef _Position_H_
#define _Position_H_


#include <string>
#include "Position_data.h"
#include <list>
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

class Position : public Object {
public:
	/*! \brief Constructor.
	 */
	Position();
	Position(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Position();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Exchange identifier.
	 */
	std::string getExchangeId();

	/*! \brief Set Exchange identifier.
	 */
	void setExchangeId(std::string  exchange_id);
	/*! \brief Get 
	 */
	std::list<Position_data> getData();

	/*! \brief Set 
	 */
	void setData(std::list <Position_data> data);

private:
	std::string exchange_id;
	std::list <Position_data>data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Position_H_ */
