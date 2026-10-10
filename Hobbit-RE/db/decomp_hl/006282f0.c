
void __fastcall FUN_006282f0(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iStack_1c;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e4e58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00640420(s_IdleAnimDelay_0074a2b4,param_1 + 0x54);
  FUN_006405e0(s_FollowThisGuid_0074a2a4,param_1 + 0x60);
  FUN_00640450(s_MinionCount_0074a298,&iStack_1c);
  iVar6 = iStack_1c;
  if (iStack_1c != *(int *)(param_1 + 0x78)) {
    pvVar1 = operator_new(iStack_1c << 3);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x70)) {
      do {
        iVar5 = *(int *)(param_1 + 0x74);
        *(undefined4 *)((int)pvVar1 + iVar2 * 8) = *(undefined4 *)(iVar5 + iVar2 * 8);
        *(undefined4 *)((int)pvVar1 + iVar2 * 8 + 4) = *(undefined4 *)(iVar5 + 4 + iVar2 * 8);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x70));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x74));
    *(void **)(param_1 + 0x74) = pvVar1;
    *(int *)(param_1 + 0x78) = iVar6;
  }
  iVar6 = 0;
  if (0 < iStack_1c) {
    do {
      FUN_00649920(auStack_18,s_Minion_d_0074a28c,iVar6);
      puVar7 = &uStack_14;
      uStack_4 = 0;
      uVar3 = FUN_00649940(puVar7);
      FUN_006405e0(uVar3,puVar7);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = *(int *)(param_1 + 0x70);
      if (*(int *)(param_1 + 0x78) < iVar2 + 1) {
        if (*(int *)(param_1 + 0x80) == 0) {
          iVar4 = *(int *)(param_1 + 0x78) / 2;
          iVar5 = 1;
          if (0 < iVar4) {
            iVar5 = iVar4;
          }
          if (iVar5 + iVar2 < 1) {
            iVar2 = 1;
          }
          else {
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            iVar2 = iVar2 + iVar4;
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x80) + iVar2;
        }
        pvVar1 = operator_new(iVar2 * 8);
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x70)) {
          do {
            iVar4 = *(int *)(param_1 + 0x74);
            *(undefined4 *)((int)pvVar1 + iVar5 * 8) = *(undefined4 *)(iVar4 + iVar5 * 8);
            *(undefined4 *)((int)pvVar1 + iVar5 * 8 + 4) = *(undefined4 *)(iVar4 + 4 + iVar5 * 8);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x70));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x74));
        *(void **)(param_1 + 0x74) = pvVar1;
        *(int *)(param_1 + 0x78) = iVar2;
      }
      iVar2 = *(int *)(param_1 + 0x70);
      iVar5 = *(int *)(param_1 + 0x74);
      *(undefined4 *)(iVar5 + iVar2 * 8) = uStack_14;
      *(undefined4 *)(iVar5 + 4 + iVar2 * 8) = uStack_10;
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    } while (iVar6 < iStack_1c);
  }
  ExceptionList = pvStack_c;
  return;
}

