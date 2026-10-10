
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00578950(int param_1,float *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  float *pfVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar4 = param_2;
  *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
  *(undefined4 *)(param_1 + 0x3d28) = 0;
  FUN_004357e0(param_2);
  FUN_004357e0(pfVar4 + 3);
  iVar6 = FUN_004021c0(DAT_00777270,DAT_00777274);
  if (param_3 != 0x400) {
    FUN_0054d4f0(&param_2,0xffffffff,param_3,pfVar4);
    iVar10 = 0;
    if (param_2 != (float *)0xffffffff) {
      FUN_00588ff0(param_2);
      iVar8 = FUN_00589010(param_2,&local_8);
      while (iVar8 != 0) {
        iVar10 = iVar10 + 1;
        piVar9 = (int *)FUN_004021c0(local_8,local_4);
        uVar1 = *(ushort *)((int)piVar9 + 0x7a);
        param_3 = uVar1 & 4;
        if ((uVar1 & 4) == 0) {
          bVar3 = false;
          if (iVar6 != 0) {
            if ((((uVar1 & 0x400) != 0) && (*(char *)(iVar6 + 0x7c) == '\x1c')) ||
               (((*(ushort *)(iVar6 + 0x7a) & 0x400) != 0 && ((char)piVar9[0x1f] == '\x1c')))) {
              bVar3 = true;
            }
            param_3 = uVar1 & 0x200;
            if (((((uVar1 & 0x200) != 0) && (*(char *)(iVar6 + 0x7c) == '\x12')) ||
                ((param_3 = *(ushort *)(iVar6 + 0x7a) & 0x200,
                 (*(ushort *)(iVar6 + 0x7a) & 0x200) != 0 && ((char)piVar9[0x1f] == '\x12')))) ||
               (bVar3)) goto LAB_00578bd8;
          }
          (**(code **)(*piVar9 + 0x74))();
          *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
        }
LAB_00578bd8:
        iVar8 = FUN_00589010(param_2,&local_8);
      }
      FUN_00588b20(param_2);
    }
    *(undefined4 *)(param_1 + 0x42c4) = 0;
    _DAT_00777a6c = iVar10;
    _DAT_00777a70 = 0;
    return;
  }
  uVar7 = FUN_0054c5c0(0xe,s_C__projects_meridian_Support_Col_007402c8,0x3dc);
  sVar5 = FUN_0054c7c0();
  do {
    if (sVar5 < 0) {
      FUN_0054c880(uVar7);
      return;
    }
    if (sVar5 == -1) {
      piVar9 = (int *)0x0;
    }
    else {
      uVar2 = *(uint *)(DAT_0076f648 + sVar5 * 0x14);
      if (uVar2 == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
      }
    }
    uVar1 = *(ushort *)((int)piVar9 + 0x7a);
    param_2 = (float *)(uVar1 & 4);
    if ((uVar1 & 4) == 0) {
      bVar3 = false;
      if (iVar6 != 0) {
        if ((((uVar1 & 0x400) != 0) && (*(char *)(iVar6 + 0x7c) == '\x1c')) ||
           (((*(ushort *)(iVar6 + 0x7a) & 0x400) != 0 && ((char)piVar9[0x1f] == '\x1c')))) {
          bVar3 = true;
        }
        param_2 = (float *)(uVar1 & 0x200);
        if ((((uVar1 & 0x200) != 0) && (*(char *)(iVar6 + 0x7c) == '\x12')) ||
           (((param_2 = (float *)(*(ushort *)(iVar6 + 0x7a) & 0x200),
             (*(ushort *)(iVar6 + 0x7a) & 0x200) != 0 && ((char)piVar9[0x1f] == '\x12')) || (bVar3))
           )) goto LAB_00578ad5;
      }
      if ((((*pfVar4 <= (float)piVar9[0x14]) &&
           (pfVar4[3] < (float)piVar9[0x11] == (NAN(pfVar4[3]) || NAN((float)piVar9[0x11])))) &&
          (pfVar4[2] <= (float)piVar9[0x16])) &&
         (((pfVar4[5] < (float)piVar9[0x13] == (NAN(pfVar4[5]) || NAN((float)piVar9[0x13])) &&
           (pfVar4[1] <= (float)piVar9[0x15])) &&
          (pfVar4[4] < (float)piVar9[0x12] == (NAN(pfVar4[4]) || NAN((float)piVar9[0x12])))))) {
        (**(code **)(*piVar9 + 0x74))();
      }
    }
LAB_00578ad5:
    sVar5 = FUN_0054c7c0();
  } while( true );
}

