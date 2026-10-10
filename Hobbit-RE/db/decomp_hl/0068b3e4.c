
void __thiscall FUN_0068b3e4(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0068b113(param_2 + *(int *)(param_1 + 0x1034),param_3 + *(int *)(param_1 + 0x1040),
                       *(int *)(param_1 + 0x1080) != *(int *)(param_1 + 0x1050));
  if (-1 < iVar1) {
    puVar3 = (undefined4 *)
             ((*(int *)(param_1 + 0x1030) - *(int *)(param_1 + 0x1068)) * 0x10 +
             *(int *)(param_1 + 0x1064));
    for (uVar2 = (uint)(*(int *)(param_1 + 0x1050) << 4) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(undefined4 *)(param_1 + 0x1084) = 1;
  }
  return;
}

