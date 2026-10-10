
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00410690(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  piVar5 = (int *)(param_1 + 0x120);
  iVar4 = 0x19;
  do {
    iVar1 = FUN_0063d990();
    piVar5[5] = iVar1;
    FUN_0063ce50(piVar5);
    piVar2 = (int *)FUN_004021c0(piVar5[-4],piVar5[-3]);
    if (piVar2 != (int *)0x0) {
      FUN_004acb90();
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x30))();
      uStack_c = *puVar3;
      uStack_4 = puVar3[2];
      fStack_8 = (float)*piVar5 * _DAT_006e9580 * _DAT_006e9368 * _DAT_006e957c;
      (**(code **)(*piVar2 + 0xf0))(&uStack_c);
    }
    piVar5 = piVar5 + 10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_004104c0();
  return;
}

