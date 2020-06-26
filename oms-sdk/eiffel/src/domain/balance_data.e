note
 description:"[
		OMS - REST API
 		Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. ###Lifecycle Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackham. ###Lifecycle 2 Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackhama. 
  		The version of the OpenAPI document: v1
 	    

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class BALANCE_DATA 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    id: detachable STRING_32 
      -- symbol_exchange
    symbol_exchange: detachable STRING_32 
      -- Currency code.
    symbol_coinapi: detachable STRING_32 
      -- CoinAPI currency code.
    balance: REAL_32 
      -- The current balance.
    available: REAL_32 
      -- The amount that is available to trade.
    locked: REAL_32 
      -- Blocked funds.
    update_origin: detachable STRING_32 
      -- Source of last modification. 

feature -- Change Element  
 
    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name		
      end

    set_symbol_exchange (a_name: like symbol_exchange)
        -- Set 'symbol_exchange' with 'a_name'.
      do
        symbol_exchange := a_name
      ensure
        symbol_exchange_set: symbol_exchange = a_name		
      end

    set_symbol_coinapi (a_name: like symbol_coinapi)
        -- Set 'symbol_coinapi' with 'a_name'.
      do
        symbol_coinapi := a_name
      ensure
        symbol_coinapi_set: symbol_coinapi = a_name		
      end

    set_balance (a_name: like balance)
        -- Set 'balance' with 'a_name'.
      do
        balance := a_name
      ensure
        balance_set: balance = a_name		
      end

    set_available (a_name: like available)
        -- Set 'available' with 'a_name'.
      do
        available := a_name
      ensure
        available_set: available = a_name		
      end

    set_locked (a_name: like locked)
        -- Set 'locked' with 'a_name'.
      do
        locked := a_name
      ensure
        locked_set: locked = a_name		
      end

    set_update_origin (a_name: like update_origin)
        -- Set 'update_origin' with 'a_name'.
      do
        update_origin := a_name
      ensure
        update_origin_set: update_origin = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass BALANCE_DATA%N")
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")    
        end  
        if attached symbol_exchange as l_symbol_exchange then
          Result.append ("%Nsymbol_exchange:")
          Result.append (l_symbol_exchange.out)
          Result.append ("%N")    
        end  
        if attached symbol_coinapi as l_symbol_coinapi then
          Result.append ("%Nsymbol_coinapi:")
          Result.append (l_symbol_coinapi.out)
          Result.append ("%N")    
        end  
        if attached balance as l_balance then
          Result.append ("%Nbalance:")
          Result.append (l_balance.out)
          Result.append ("%N")    
        end  
        if attached available as l_available then
          Result.append ("%Navailable:")
          Result.append (l_available.out)
          Result.append ("%N")    
        end  
        if attached locked as l_locked then
          Result.append ("%Nlocked:")
          Result.append (l_locked.out)
          Result.append ("%N")    
        end  
        if attached update_origin as l_update_origin then
          Result.append ("%Nupdate_origin:")
          Result.append (l_update_origin.out)
          Result.append ("%N")    
        end  
      end
end


