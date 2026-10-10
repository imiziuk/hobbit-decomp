
void __thiscall FUN_00410310(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0x120 +
                   (*(int *)(param_1 + 0x84) * 5 + *(int *)(param_1 + 0x80)) * 0x28);
  *(undefined4 *)(param_1 + 0x100) = 0;
  uVar2 = *puVar1;
  *(uint *)(param_1 + 0x104) = uVar2;
  if (param_2 == 0) {
    uVar2 = uVar2 + 1;
  }
  else {
    uVar2 = uVar2 + 3;
  }
  uVar2 = uVar2 & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  *(uint *)(param_1 + 0x108) = uVar2;
  *puVar1 = uVar2;
  FUN_004104c0();
  FUN_00659600(s_WaterValveSqueak_0071ea8c,1);
  return;
}

