import ezpz

while True:
    text = input('EZPZ > ')
    result, error = ezpz.run(text)
    if error: print(error.as_string())
    else: print(result)
    print(text)