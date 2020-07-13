=begin
#OEML - REST API

#This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 

The version of the OpenAPI document: v1

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'date'

module OpenapiClient
  # The new order message.
  class NewOrderSingle
    # Exchange identifier.
    attr_accessor :exchange_id

    # The unique identifier of the order assigned by the client.
    attr_accessor :client_order_id

    # Exchange symbol. One of the properties (`symbol_exchange`, `symbol_coinapi`) are required to identify the market for the new order.
    attr_accessor :symbol_exchange

    # CoinAPI symbol. One of the properties (`symbol_exchange`, `symbol_coinapi`) are required to identify the market for the new order.
    attr_accessor :symbol_coinapi

    # Order quantity.
    attr_accessor :amount_order

    # Order price.
    attr_accessor :price

    attr_accessor :side

    attr_accessor :order_type

    attr_accessor :time_in_force

    # Expiration time. Conditionaly required for orders with time_in_force = `GOOD_TILL_TIME_EXCHANGE` or `GOOD_TILL_TIME_OEML`.
    attr_accessor :expire_time

    # Order execution instructions are documented in the separate section: <a href=\"#oeml-order-params-exec\">OEML / Starter Guide / Order parameters / Execution instructions</a> 
    attr_accessor :exec_inst

    class EnumAttributeValidator
      attr_reader :datatype
      attr_reader :allowable_values

      def initialize(datatype, allowable_values)
        @allowable_values = allowable_values.map do |value|
          case datatype.to_s
          when /Integer/i
            value.to_i
          when /Float/i
            value.to_f
          else
            value
          end
        end
      end

      def valid?(value)
        !value || allowable_values.include?(value)
      end
    end

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'exchange_id' => :'exchange_id',
        :'client_order_id' => :'client_order_id',
        :'symbol_exchange' => :'symbol_exchange',
        :'symbol_coinapi' => :'symbol_coinapi',
        :'amount_order' => :'amount_order',
        :'price' => :'price',
        :'side' => :'side',
        :'order_type' => :'order_type',
        :'time_in_force' => :'time_in_force',
        :'expire_time' => :'expire_time',
        :'exec_inst' => :'exec_inst'
      }
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'exchange_id' => :'String',
        :'client_order_id' => :'String',
        :'symbol_exchange' => :'String',
        :'symbol_coinapi' => :'String',
        :'amount_order' => :'Float',
        :'price' => :'Float',
        :'side' => :'OrdSide',
        :'order_type' => :'OrdType',
        :'time_in_force' => :'TimeInForce',
        :'expire_time' => :'Date',
        :'exec_inst' => :'Array<String>'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::NewOrderSingle` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::NewOrderSingle`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'exchange_id')
        self.exchange_id = attributes[:'exchange_id']
      end

      if attributes.key?(:'client_order_id')
        self.client_order_id = attributes[:'client_order_id']
      end

      if attributes.key?(:'symbol_exchange')
        self.symbol_exchange = attributes[:'symbol_exchange']
      end

      if attributes.key?(:'symbol_coinapi')
        self.symbol_coinapi = attributes[:'symbol_coinapi']
      end

      if attributes.key?(:'amount_order')
        self.amount_order = attributes[:'amount_order']
      end

      if attributes.key?(:'price')
        self.price = attributes[:'price']
      end

      if attributes.key?(:'side')
        self.side = attributes[:'side']
      end

      if attributes.key?(:'order_type')
        self.order_type = attributes[:'order_type']
      end

      if attributes.key?(:'time_in_force')
        self.time_in_force = attributes[:'time_in_force']
      end

      if attributes.key?(:'expire_time')
        self.expire_time = attributes[:'expire_time']
      end

      if attributes.key?(:'exec_inst')
        if (value = attributes[:'exec_inst']).is_a?(Array)
          self.exec_inst = value
        end
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @exchange_id.nil?
        invalid_properties.push('invalid value for "exchange_id", exchange_id cannot be nil.')
      end

      if @client_order_id.nil?
        invalid_properties.push('invalid value for "client_order_id", client_order_id cannot be nil.')
      end

      if @amount_order.nil?
        invalid_properties.push('invalid value for "amount_order", amount_order cannot be nil.')
      end

      if @price.nil?
        invalid_properties.push('invalid value for "price", price cannot be nil.')
      end

      if @side.nil?
        invalid_properties.push('invalid value for "side", side cannot be nil.')
      end

      if @order_type.nil?
        invalid_properties.push('invalid value for "order_type", order_type cannot be nil.')
      end

      if @time_in_force.nil?
        invalid_properties.push('invalid value for "time_in_force", time_in_force cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @exchange_id.nil?
      return false if @client_order_id.nil?
      return false if @amount_order.nil?
      return false if @price.nil?
      return false if @side.nil?
      return false if @order_type.nil?
      return false if @time_in_force.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          exchange_id == o.exchange_id &&
          client_order_id == o.client_order_id &&
          symbol_exchange == o.symbol_exchange &&
          symbol_coinapi == o.symbol_coinapi &&
          amount_order == o.amount_order &&
          price == o.price &&
          side == o.side &&
          order_type == o.order_type &&
          time_in_force == o.time_in_force &&
          expire_time == o.expire_time &&
          exec_inst == o.exec_inst
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [exchange_id, client_order_id, symbol_exchange, symbol_coinapi, amount_order, price, side, order_type, time_in_force, expire_time, exec_inst].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def self.build_from_hash(attributes)
      new.build_from_hash(attributes)
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.openapi_types.each_pair do |key, type|
        if type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end # or else data not found in attributes(hash), not an issue as the data can be optional
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :DateTime
        DateTime.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :Boolean
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        OpenapiClient.const_get(type).build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        if value.nil?
          is_nullable = self.class.openapi_nullable.include?(attr)
          next if !is_nullable || (is_nullable && !instance_variable_defined?(:"@#{attr}"))
        end
        
        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end
  end
end
