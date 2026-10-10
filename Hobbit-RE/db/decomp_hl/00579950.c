
void __thiscall
FUN_00579950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_78 [120];
  
  iVar1 = FUN_0057d810(param_2,param_3,param_4,local_78,10,param_1);
  if (0 < iVar1) {
    puVar2 = local_78;
    do {
      FUN_005799d0(puVar2,param_4,param_5,param_6,param_7);
      puVar2 = puVar2 + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

