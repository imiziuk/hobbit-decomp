
void __fastcall FUN_0060f720(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  puVar4 = (undefined4 *)(param_1 + 0x90);
  iVar3 = 4;
  do {
    FUN_00610840(*puVar4,puVar4[1],*(undefined4 *)(*(int *)(param_1 + 8) + 0x170),
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x174));
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar1 = (int *)FUN_005af120();
  uVar6 = 1;
  uVar2 = (**(code **)(*piVar1 + 0x28))(1);
  uVar2 = FUN_00659630(s_BeornSpell_Loop_007491cc,uVar2,uVar6);
  *(undefined4 *)(param_1 + 0x198) = uVar2;
  uVar5 = FUN_0054bad0(0x2d,0,0);
  uVar2 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  piVar1 = (int *)FUN_004021c0(uVar2,(int)((ulonglong)uVar5 >> 0x20));
  if (piVar1 != (int *)0x0) {
    FUN_00488c30(s_Beorn_Trap_007491c0);
    (**(code **)(*piVar1 + 0xf4))
              (*(undefined4 *)(*(int *)(param_1 + 8) + 0x170),
               *(undefined4 *)(*(int *)(param_1 + 8) + 0x174));
    (**(code **)(*piVar1 + 0xf8))(&DAT_0075b6e0);
  }
                    /* WARNING: Could not recover jumptable at 0x0060f7fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x110))();
  return;
}

