
undefined4 __fastcall FUN_00534520(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar2 = FUN_0054c5c0(0x1c,s_C__projects_meridian_Support_Obj_00737238,0x1d8);
  sVar1 = FUN_0054c7c0();
  if (sVar1 < 0) {
LAB_005345ca:
    FUN_0054c880(uVar2);
    return uVar4;
  }
  do {
    iVar3 = FUN_004a12e0();
    if (iVar3 != 0) {
      uVar4 = 1;
      iVar3 = FUN_00587ce0();
      if (iVar3 == 0x12) {
        *(undefined4 *)(param_1 + 0xa8) = 1;
        goto LAB_005345ca;
      }
    }
    sVar1 = FUN_0054c7c0();
    if (sVar1 < 0) {
      FUN_0054c880(uVar2);
      return uVar4;
    }
  } while( true );
}

