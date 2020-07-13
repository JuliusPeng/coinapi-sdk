=begin
#OEML - REST API

#This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 

The version of the OpenAPI document: v1
Contact: support@coinapi.io
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::CancelOrderAllRequest
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'CancelOrderAllRequest' do
  before do
    # run before each test
    @instance = OpenapiClient::CancelOrderAllRequest.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of CancelOrderAllRequest' do
    it 'should create an instance of CancelOrderAllRequest' do
      expect(@instance).to be_instance_of(OpenapiClient::CancelOrderAllRequest)
    end
  end
  describe 'test attribute "exchange_id"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
