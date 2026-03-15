eCharge = -1.602e-19
pCharge = 1.602e-19
total = 1402
finalCharge = -7.968e-17
mult1=0
mult2=0
# i=1
# j=1
for j in range(mult2,1403):
    mult1 = 0
    for i in range(mult1,1403):
        if(abs((mult1*eCharge)+(mult2*pCharge) - finalCharge) < 1e-25):
            print("electrons: " + str(mult1))
            break
        else:
            mult1 +=1
            # print("first loop "+ str(mult1))
    mult2 +=1
    # print("second loop " + str(mult2))



wait = input("press enter")