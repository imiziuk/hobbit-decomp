
void __thiscall FUN_00488c30(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_8c;
  
  if (DAT_0075ce8c == 0) {
    iStack_8c = 0x488c48;
    FUN_00429100();
  }
  if (param_2 != 0) {
    iStack_8c = param_2;
    iVar1 = FUN_00647cf0();
    if (iVar1 != 0) {
      iStack_8c = param_2;
      (**(code **)(*param_1 + 0xd0))();
      (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
      if ((*(byte *)(param_1 + 0x55) & 1) != 0) {
        *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 4;
      }
      *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfd;
      FUN_00648a10(param_1 + 0x2a,&iStack_8c);
      iVar1 = FUN_00647f20(&iStack_8c,&DAT_00729210);
      if (iVar1 == 0) {
        iVar1 = FUN_00647cf0(&iStack_8c);
        iVar1 = (int)&iStack_8c + iVar1;
      }
      FUN_00647d10(iVar1,&DAT_00729208);
      uVar2 = FUN_005496c0(&iStack_8c,s_Effects_00729200);
      FUN_006b69a0(param_2,uVar2);
      param_1[0x6d] = 0;
      param_1[0x6e] = -1;
    }
  }
  return;
}

