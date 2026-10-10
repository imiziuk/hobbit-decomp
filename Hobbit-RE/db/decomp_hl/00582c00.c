
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00582c00(int param_1,int *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float10 fVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc0f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_LightCollectFunc_007406fc);
  piVar6 = param_2;
  DAT_007778f8 = DAT_007778f8 + 1;
  uVar2 = *(ushort *)(param_1 + 0x14);
  local_4 = 0;
  do {
    uVar8 = (uint)uVar2;
    if (uVar8 == 0xffff) {
      fVar11 = (float10)FUN_0064cd30();
      _DAT_007778f0 = (float)fVar11;
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return 1;
    }
    _DAT_007778f4 = _DAT_007778f4 + 1;
    puVar1 = (ushort *)(*(int *)(&DAT_007782dc + ((int)uVar8 >> 10) * 4) + (uVar8 & 0x3ff) * 0xc);
    if (piVar6[2] == piVar6[1]) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return 0;
    }
    iVar3 = *(int *)(puVar1 + 4);
    bVar7 = FUN_00494880();
    if ((((((*(byte *)(piVar6 + 0x15) & bVar7) != 0) &&
          (uVar8 = FUN_004948a0(), (piVar6[10] & uVar8) != 0)) &&
         (iVar9 = FUN_004948f0(), iVar9 != 0)) && (*(int *)(iVar3 + 0xfc) != DAT_00740624)) &&
       ((iVar9 = FUN_00494680(), iVar9 != 0 || (piVar6[9] == 0)))) {
      fVar11 = (float10)FUN_00494640();
      pfVar10 = (float *)FUN_00494670();
      if (*pfVar10 < (float)piVar6[3] == (NAN(*pfVar10) || NAN((float)piVar6[3]))) {
        fVar4 = DAT_006e92e4;
        if ((float)piVar6[6] < *pfVar10) {
          fVar4 = *pfVar10 - (float)piVar6[6];
          goto LAB_00582d1a;
        }
      }
      else {
        fVar4 = *pfVar10 - (float)piVar6[3];
LAB_00582d1a:
        fVar4 = fVar4 * fVar4;
      }
      if (pfVar10[1] < (float)piVar6[4] == (NAN(pfVar10[1]) || NAN((float)piVar6[4]))) {
        if ((float)piVar6[7] < pfVar10[1]) {
          fVar5 = pfVar10[1] - (float)piVar6[7];
          goto LAB_00582d43;
        }
      }
      else {
        fVar5 = pfVar10[1] - (float)piVar6[4];
LAB_00582d43:
        fVar4 = fVar5 * fVar5 + fVar4;
      }
      if (pfVar10[2] < (float)piVar6[5] == (NAN(pfVar10[2]) || NAN((float)piVar6[5]))) {
        if ((float)piVar6[8] < pfVar10[2]) {
          fVar5 = pfVar10[2] - (float)piVar6[8];
          goto LAB_00582d70;
        }
      }
      else {
        fVar5 = pfVar10[2] - (float)piVar6[5];
LAB_00582d70:
        fVar4 = fVar5 * fVar5 + fVar4;
      }
      fVar5 = (float)fVar11 * (float)fVar11;
      if (fVar4 < fVar5 != (fVar4 == fVar5)) {
        if ((piVar6[0x14] == 0) && (iVar9 = FUN_00494680(), iVar9 == 0)) {
          if (piVar6[0x13] != 0) {
            FUN_00493e40(piVar6 + 0x10,&param_2);
            piVar6[0xb] = (int)((float)((uint)param_2 >> 0x10 & 0xff) + (float)piVar6[0xb]);
            piVar6[0xf] = piVar6[0xf] + 1;
            piVar6[0xc] = (int)((float)((uint)param_2 >> 8 & 0xff) + (float)piVar6[0xc]);
            piVar6[0xd] = (int)((float)((uint)param_2 & 0xff) + (float)piVar6[0xd]);
            piVar6[0xe] = (int)((float)((uint)param_2 >> 0x18) + (float)piVar6[0xe]);
          }
        }
        else {
          *(undefined2 *)(*piVar6 + piVar6[2] * 2) = *(undefined2 *)(iVar3 + 0x78);
          piVar6[2] = piVar6[2] + 1;
        }
        *(int *)(iVar3 + 0xfc) = DAT_00740624;
      }
    }
    uVar2 = *puVar1;
  } while( true );
}

