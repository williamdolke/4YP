function values = fullyConnected(weights, prevValues, bias)
    values = sum(prevValues.*weights) + bias;
end
