
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054c2e0(int param_1,float param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  float *pfVar7;
  float10 fVar8;
  float local_34;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d97a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_ObjectLogic_0073ce18);
  iVar3 = 0;
  local_4 = 0;
  FUN_0064cc30();
  FUN_0064cc00();
  pfVar7 = (float *)(param_1 + 0x2008);
  pfVar5 = pfVar7;
  do {
    *pfVar5 = 0.0;
    if ((&DAT_0076f908)[iVar3] == 0) {
      pcVar1 = s_UNKNOWN_0073ce10;
    }
    else {
      pcVar1 = *(char **)((&DAT_0076f908)[iVar3] + 4);
    }
    FUN_006501d0(pcVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0064cbe0();
    FUN_0064cc00();
    if ((pfVar5[-2] != 0.0) && (*(int *)((&DAT_0076f908)[iVar3] + 0x18) != 0)) {
      uVar2 = FUN_0054c5c0(iVar3,s__tHC__projects_meridian_Support__0073ccc1 + 3,0x2e7);
      while( true ) {
        iVar4 = *(int *)(param_1 + 0x28dc + *(int *)(param_1 + 0x2adc) * 4);
        if (iVar4 == -1) break;
        piVar6 = *(int **)(*(int *)(param_1 + 0x28c0) + iVar4 * 0x14);
        *(int *)(param_1 + 0x28dc + *(int *)(param_1 + 0x2adc) * 4) =
             (int)*(short *)(*(int *)(param_1 + 0x28c0) + iVar4 * 0x14 + 4);
        if (piVar6 == (int *)0x0) break;
        if ((*(byte *)((int)piVar6 + 0x7b) & 8) == 0) {
          (**(code **)(*piVar6 + 0x10))(param_2 * pfVar5[5]);
          if ((*(byte *)((int)piVar6 + 0x7a) & 2) != 0) {
            FUN_0054be30(piVar6[2],piVar6[3]);
          }
        }
      }
      FUN_0054c880(uVar2);
    }
    FUN_0064cc50();
    fVar8 = (float10)FUN_0064cd30();
    *pfVar5 = (float)fVar8;
    local_4 = local_4 & 0xffffff00;
    FUN_006501e0();
    iVar3 = iVar3 + 1;
    pfVar5 = pfVar5 + 8;
  } while (iVar3 < 0x46);
  FUN_0064cc50();
  if (DAT_0076fa28 != 0) {
    iVar3 = 6;
    local_34 = 0.0;
    iVar4 = 1;
    piVar6 = &DAT_0076f908;
    do {
      if (DAT_006e92e4 < *pfVar7) {
        if (_DAT_006e9550 < *pfVar7) {
          FUN_0064f0d0(iVar4,iVar3,s__4d___5_2f__s_0073ce00,pfVar7[-2],(double)*pfVar7,
                       *(undefined4 *)(*piVar6 + 4));
          local_34 = local_34 + *pfVar7;
          iVar3 = iVar3 + 1;
        }
        if (0x14 < iVar3) {
          if (iVar4 == 0x1e) break;
          iVar4 = 0x1e;
          iVar3 = 6;
        }
      }
      piVar6 = piVar6 + 1;
      pfVar7 = pfVar7 + 8;
    } while ((int)piVar6 < 0x76fa20);
    FUN_0064f0d0(1,0x16,s_____________________0073cdec,(double)local_34);
    FUN_0064f0d0(1,0x17,s_WarningTotal___5_2f_0073cdd8,(double)local_34);
    fVar8 = (float10)FUN_0064cd30();
    FUN_0064f0d0(1,0x18,s_LogicTotal___5_2f_0073cdc4,(double)fVar8);
    fVar8 = (float10)FUN_0064cd30();
    FUN_0064f0d0(1,0x19,s_Unaccounted___5_2f_0073cdb0,(double)(fVar8 - (float10)local_34));
    FUN_0064f0d0(1,0x1a,s_DeltaTime___5_2f_0073cd9c,(double)(param_2 * _DAT_006e99c0));
    fVar8 = (float10)FUN_0064cd30();
    if ((float10)_DAT_006e9554 < fVar8) {
      _DAT_0076fa2c = 1;
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

