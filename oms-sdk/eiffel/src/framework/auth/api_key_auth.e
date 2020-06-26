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
class
	API_KEY_AUTH

inherit

	AUTHENTICATION

create
	make

feature {NONE} -- Initialization

	make (a_location: STRING; a_param_name: STRING)
		do
			location := a_location
			param_name := a_param_name
		end

feature -- Access

	location: STRING
	param_name: STRING

	api_key: detachable STRING_32
	api_key_prefix: detachable STRING_32

feature -- Change Element

	set_api_key (a_api_key: STRING_32)
			-- Set `api_key' with `a_api_key'.
		do
			api_key := a_api_key
		ensure
			api_key_set: api_key = a_api_key
		end

	set_api_key_prefix (a_api_key_prefix: STRING_32)
			-- Set `api_key_prefix' with `a_api_key_prefix'.
		do
			api_key_prefix := a_api_key_prefix
		ensure
			api_key_prefix_set: api_key_prefix = a_api_key_prefix
		end

feature -- Access

   apply_to_params(a_query_params: LIST [TUPLE [name:STRING; value:STRING]]; a_header_params: STRING_TABLE [STRING])
   			-- <Precursor>.
   		local
   			l_value: STRING_32
   		do
   			if attached api_key as l_api_key then
   				if attached api_key_prefix as l_api_key_prefix then
   					create l_value.make_from_string (l_api_key_prefix)
   					l_value.append_string (" ")
   					l_value.append_string (l_api_key)
   				else
   					create l_value.make_from_string (l_api_key)
				end
   			end
   		end

end
