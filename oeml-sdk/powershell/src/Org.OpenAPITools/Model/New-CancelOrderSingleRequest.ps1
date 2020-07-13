function New-CancelOrderSingleRequest {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${exchangeUnderscoreid},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${exchangeUnderscoreorderUnderscoreid},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${clientUnderscoreorderUnderscoreid}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CancelOrderSingleRequest' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CancelOrderSingleRequest -ArgumentList @(
            ${exchangeUnderscoreid},
            ${exchangeUnderscoreorderUnderscoreid},
            ${clientUnderscoreorderUnderscoreid}
        )
    }
}
