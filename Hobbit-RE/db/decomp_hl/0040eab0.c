
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040eab0(int param_1,short param_2)

{
  float10 fVar1;
  int *piVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float local_28;
  undefined1 local_20 [32];
  
  FUN_0064f190(local_20,s_AA_Erebor_Spike__02d_02d_0071e768,
               (int)param_2 % (int)*(short *)(param_1 + 0x5c),
               (int)param_2 / (int)*(short *)(param_1 + 0x5c));
  piVar2 = (int *)FUN_0054c120(local_20,1);
  FUN_004c7660(0);
  FUN_004c74d0(0x3f800000);
  FUN_004c77d0(0);
  *(ushort *)((int)piVar2 + 0x15a) = *(ushort *)((int)piVar2 + 0x15a) & 0xbfff ^ 0x4000;
  fVar4 = (float10)FUN_00404890();
  fVar1 = (float10)_DAT_006e936c;
  local_28 = (float)piVar2[0x15] - (float)piVar2[0x12];
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
  uStack_30 = puVar3[2];
  fStack_34 = local_28 + (float)puVar3[1];
  uStack_38 = *puVar3;
  FUN_0054d020(piVar2[2],piVar2[3],&uStack_38,(float)(fVar4 * fVar1),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 100),0x3f800000,0x20,0,0,0);
  FUN_00659600(s_SpikeEject_0071e75c,1);
  return;
}

