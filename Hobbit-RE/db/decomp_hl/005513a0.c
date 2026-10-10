
void __thiscall FUN_005513a0(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_c [12];
  
  *(undefined4 *)(param_1 + 0x88) = 0x1e;
  uVar1 = FUN_00647b10(0,6);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = 0x40000000;
  *(undefined4 *)(param_1 + 0x94) = *param_2;
  *(undefined4 *)(param_1 + 0x98) = param_2[1];
  *(undefined4 *)(param_1 + 0x9c) = param_2[2];
  *(undefined1 *)(param_1 + 0xa3) = param_3[3];
  *(undefined1 *)(param_1 + 0xa2) = param_3[2];
  *(undefined1 *)(param_1 + 0xa1) = param_3[1];
  *(undefined1 *)(param_1 + 0xa0) = *param_3;
  FUN_005893e0(param_1 + 0x90,0x3f800000,0x3f800000,1,0,0);
  puVar2 = local_c;
  FUN_0065fce0(0,puVar2);
  FUN_00672260(puVar2);
  FUN_00659600(s_LightningCrack_0073d2f8,1);
  return;
}

