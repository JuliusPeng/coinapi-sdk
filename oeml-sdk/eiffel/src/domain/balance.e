note
 description:"[
		OEML - REST API
 		This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
  		The version of the OpenAPI document: v1
 	    Contact: support@coinapi.io

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class BALANCE 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    exchange_id: detachable STRING_32 
      -- Exchange identifier.
    data: detachable LIST [BALANCE_DATA] 
      

feature -- Change Element  
 
    set_exchange_id (a_name: like exchange_id)
        -- Set 'exchange_id' with 'a_name'.
      do
        exchange_id := a_name
      ensure
        exchange_id_set: exchange_id = a_name		
      end

    set_data (a_name: like data)
        -- Set 'data' with 'a_name'.
      do
        data := a_name
      ensure
        data_set: data = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass BALANCE%N")
        if attached exchange_id as l_exchange_id then
          Result.append ("%Nexchange_id:")
          Result.append (l_exchange_id.out)
          Result.append ("%N")    
        end  
        if attached data as l_data then
          across l_data as ic loop
            Result.append ("%N data:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
      end
end


