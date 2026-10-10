
undefined4 __thiscall FUN_0049a810(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00647e40(param_2,&DAT_00729f78);
  if (iVar1 != 0) {
    uVar2 = FUN_004ab750(param_2,param_3);
    return uVar2;
  }
  iVar1 = *param_3;
  if ((((iVar1 != 4) && (iVar1 != 7)) && (iVar1 != 6)) && (iVar1 != 0xd)) {
    return 0;
  }
  FUN_00647d70(param_1 + 0xc0,param_3 + 2,0x200);
  *(undefined1 *)(param_1 + 0x2bf) = 0;
  return 1;
}

