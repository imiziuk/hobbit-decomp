
void __fastcall FUN_005a82d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int *local_8;
  
  FUN_0066c3a0(3,0x24);
  FUN_0066ddd0(0x2000ff00);
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x8888)) {
    local_8 = (int *)(param_1 + 0x888c);
    do {
      iVar3 = *local_8 * 0x1b4 + param_1;
      iVar1 = 1;
      if (1 < *(int *)(*local_8 * 0x1b4 + 0x10 + param_1) + -1) {
        iVar4 = iVar3 + 0x2c;
        do {
          FUN_0066de80(iVar3 + 0x14);
          FUN_0066de80(iVar4 + -0xc);
          FUN_0066de80(iVar4);
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar1 < *(int *)(iVar3 + 0x10) + -1);
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_c < *(int *)(param_1 + 0x8888));
  }
  FUN_0066d9a0();
  FUN_0066c3a0(1,0x10);
  FUN_0066ddd0(0xff00ff00);
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x8888)) {
    local_8 = (int *)(param_1 + 0x888c);
    do {
      iVar1 = *(int *)(*local_8 * 0x1b4 + 0x10 + param_1);
      iVar4 = *local_8 * 0x1b4 + param_1;
      iVar3 = 0;
      if (0 < iVar1) {
        iVar2 = iVar4 + 0x14;
        iVar1 = (iVar1 * 3 + -3) * 4;
        iVar5 = 0;
        do {
          FUN_0066de80(iVar1 + 0x14 + iVar4);
          FUN_0066de80(iVar2);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0xc;
          iVar1 = iVar5;
          iVar5 = iVar5 + 0xc;
        } while (iVar3 < *(int *)(iVar4 + 0x10));
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_c < *(int *)(param_1 + 0x8888));
  }
  FUN_0066d9a0();
  return;
}

