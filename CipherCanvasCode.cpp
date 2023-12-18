def func9(arg42, arg43):
    var44 = func12()
    def func13(arg45, arg46):
        var47 = -451 & (1310163080 | arg46)
        var48 = var44 & -329215804
        var49 = arg46 & var44
        var50 = arg43 | ((var48 | var49) | -418)
        var51 = 881 & var50 & arg45
        var52 = arg45 ^ var48 - var51 & var44
        var53 = arg42 - var48 | -1963192533 - arg42
        var54 = var49 & arg45
        var55 = -742 + arg43
        var56 = (var49 + var50 | -151) - 1140575045
        var57 = var52 | var44
        var58 = (arg43 & 980457966) - var57 & var55
        var59 = var49 + var48 | -676 & var58
        var60 = -43 | var49 - (arg43 | arg43)
        var61 = (var58 | var55) - var47
        var62 = (var52 - var50) & (var56 | var53)
        var63 = (var61 & var60 & arg46) + arg42
        var64 = var49 + var59 ^ (arg46 | var61)
        var65 = var49 | -1225864586 | var44 & arg42
        if arg42 < var49:
            var66 = arg43 & (arg46 | arg43)
        else:
            var66 = arg43 ^ (var58 & arg45 ^ var44)
        var67 = var65 + var63 + var58
        var68 = var56 - var67 | var53 & 997
        result = var53 - (var61 | var48) + var53 - var63 | (arg46 ^ var67) - arg46 & var53 | var50 ^ (var53 & var64)
        return result
    var69 = func13(arg42, arg43)
    var74 = func14(arg43, var69)
    var75 = (arg43 | -388807807) ^ (var69 & var74 | arg42 | var74) ^ arg42 | var44
    var76 = var74 ^ var75
    result = (var75 ^ (1925046471 | var74)) + arg43
    return result
def func14(arg70, arg71):
    var72 = 0
    for var73 in range(10):
        var72 += var73 - (var72 ^ arg71)
    return var72
def func12():
    func10()
    result = len(range(8))
    func11()
    return result
def func11():
    global len
    del len
def func10():
    global len
    len = lambda x : 6
def func8(arg26, arg27):
    var28 = -93 + -1229300525
    var29 = var28 ^ -324 & 1833691131 & -154633642
    var30 = (var29 | arg26) & arg26
    var31 = -103 + var30
    if var31 < var31:
        var32 = 2122949759 ^ 530
    else:
        var32 = ((var31 - arg26) & var30) | var31
    var33 = -122 & var30
    if var33 < var33:
        var34 = var28 ^ (arg27 ^ 453)
    else:
        var34 = var31 ^ -774
    var35 = arg26 ^ var30 - var31 | arg26
    var36 = arg26 - var35
    var37 = var30 - var28 | var28 - var33
    var38 = (var31 | 686088951 - var31) | var33
    var39 = ((var29 + var29) | 332178334) + 1025535587
    var40 = -1688405837 | -1087146160 & var37 - var28
    var41 = (var37 | 970 | var29) - var31
    result = var41 | 519 | (var33 ^ ((arg26 + var39) + (var36 - (var37 + var38 ^ (var41 ^ var35))) ^ var39)) ^ arg27
    return result
def func1(arg1, arg2):
    var6 = func2(arg2, arg1)
    if var6 < var6:
        var11 = class4()
    else:
        var11 = class6()
    for var12 in range(27):
        var13 = var11.func5
        var13(var12, var6)
    var14 = -1984990216 - var6
    var15 = -2001895385 - (arg2 | 845 - arg2)
    var16 = -457045134 - ((var15 | var14) & var15)
    var17 = var14 - 623 - (var16 | var14)
    var18 = (var15 - var6) ^ -910523062 + arg1
    var19 = (var17 + arg2) - var14
    var20 = var6 | var18
    var21 = (-292 - var15) & arg1 | var15
    var22 = arg1 | (arg1 | var19 + var17)
    var23 = ((var14 & arg1) | 1648988832) - arg1
    var24 = var20 | var22 | var14 | var14
    var25 = var19 & var21 | 1066683873
    result = (var16 ^ var25) + -1894206496 & var24
    return result
class class6(object):
    def func5(self, arg9, arg10):
        result = arg10 ^ -1930256465 + 0
        return result
class class4(class6):
    def func5(self, arg7, arg8):
        return 0
def func2(arg3, arg4):
    closure = [0]
    def func3(acc, rest):
        var5 = (((rest & (rest | 6)) | (-2 & 5)) & -4) & -2
        closure[0] += var5
        if acc == 0:
            return var5
        else:
            result = func3(acc - 1, var5)
            return result
    result = func3(10, 0)
    return result
if __name__ == "__main__":
    print 'prog_size: 2'
    print 'func_number: 8'
    print 'arg_number: 26'
    for i in xrange(25000):
        x = 5
        x = func1(x, i)
        print x,
    print 'prog_size: 2'
    print 'func_number: 9'
    print 'arg_number: 42'
    for i in xrange(25000):
        x = 5
        x = func8(x, i)
        print x,
    print 'prog_size: 5'
    print 'func_number: 15'
    print 'arg_number: 77'
    for i in xrange(25000):
        x = 5
        x = func9(x, i)
        print x,
