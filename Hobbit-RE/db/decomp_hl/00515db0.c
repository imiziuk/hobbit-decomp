
void __thiscall
FUN_00515db0(int *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  float10 fVar7;
  undefined8 uVar8;
  
  (**(code **)(*param_1 + 0x1c))(param_2);
  param_1[0x6e] = param_8;
  puVar5 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    puVar5 = &stack0xffffffe8;
  }
  puVar4 = param_3;
  if (param_3 == (undefined1 *)0x0) {
    puVar4 = &stack0xffffffe8;
  }
  (**(code **)(*(int *)param_1[0x56] + 0x1c))(puVar5);
  (**(code **)(*(int *)param_1[0x57] + 0x1c))(puVar4);
  iVar2 = FUN_006480e0(puVar5);
  bVar6 = iVar2 != 0;
  bVar1 = true;
  if (bVar6) {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffeff | 1);
  }
  else {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffffe | 0x100);
  }
  iVar2 = FUN_006480e0(puVar4);
  if (iVar2 == 0) {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffffe | 0x100);
    bVar1 = false;
  }
  else {
    uVar3 = FUN_006a3230();
    FUN_006a3220(uVar3 & 0xfffffeff | 1);
    if (!bVar6) {
      (**(code **)(*param_1 + 0x10))();
      (**(code **)(*(int *)param_1[0x57] + 0x10))();
      (**(code **)(*(int *)param_1[0x57] + 0xc))(&stack0xffffffe4);
    }
  }
  FUN_0064b7b0(param_2);
  *(char *)((int)param_1 + 0x1af) = (char)((uint)param_3 >> 0x18);
  *(char *)((int)param_1 + 0x1ae) = (char)((uint)param_3 >> 0x10);
  *(char *)((int)param_1 + 0x1ad) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x6b) = (char)param_3;
  *(undefined1 *)((int)param_1 + 0x1af) = 0;
  param_1[0x6c] = param_4;
  param_1[0x6d] = -0x40800000;
  uVar8 = FUN_0064cb70();
  fVar7 = (float10)FUN_0064cbc0(uVar8);
  *(double *)(param_1 + 0x72) = (double)fVar7;
  if ((undefined4 *)param_1[0x6c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6c] = 0;
  }
  if ((bVar1) && (param_5 != 0)) {
    FUN_006a2bd0(param_1[0x57]);
    return;
  }
  if (bVar6) {
    FUN_006a2bd0(param_1[0x56]);
  }
  return;
}

