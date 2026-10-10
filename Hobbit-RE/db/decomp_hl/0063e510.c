
undefined4 __fastcall FUN_0063e510(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5b3a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__ReadHeader_0074ac2c);
  local_4 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  do {
    iVar2 = FUN_00643f60(1);
    if ((iVar2 == 0x7fffffff) || (iVar2 == 0)) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return 0;
    }
  } while ((iVar2 != 2) || (param_1[0x680] != '['));
  iVar2 = FUN_00643f60(1);
  if (iVar2 == 3) {
    FUN_00647d10(param_1,param_1 + 0x274);
    iVar2 = FUN_00643f60(1);
    if (iVar2 == 2) {
      cVar1 = param_1[0x680];
      if (cVar1 != ']') {
        if (cVar1 != ':') {
          uVar3 = FUN_0063dee0(param_1,s_Expecting_a___or___But_found__c_0074ac94,(int)cVar1);
          goto LAB_0063e673;
        }
        iVar2 = FUN_00643f60(1);
        if (iVar2 != 1) {
          uVar3 = FUN_0063dee0(param_1,s_After___specting_an_integer_but_f_0074acb4);
          goto LAB_0063e673;
        }
        *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x678);
        iVar2 = FUN_00643f60(1);
        if (iVar2 != 2) {
          uVar3 = FUN_0063dee0(param_1,s_Expecting___But_stead_found_some_0074acec);
          goto LAB_0063e673;
        }
      }
      uVar3 = FUN_0063e1c0();
    }
    else {
      uVar3 = FUN_0063dee0(param_1,s_Expecting_a___or___But_found_som_0074ac68);
    }
  }
  else {
    uVar3 = FUN_0063dee0(param_1,s_Expecting_a_string_found_somethi_0074ac40);
  }
LAB_0063e673:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar3;
}

