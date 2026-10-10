
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00584ab0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc550;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_render_mgr__RenderCharacters_00740d54);
  uVar8 = 0;
  local_4 = 0;
  *param_1 = 0;
  iVar2 = DAT_0076f11c;
  iVar6 = DAT_007607fc;
  iVar3 = DAT_007607f8;
  if (param_1[0x1d] != 0) goto LAB_00584ce2;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar3 = FUN_00406ce0(iVar3,iVar6);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar3 == -1) {
    FUN_00649720();
LAB_00584b62:
    if (DAT_007607f8 != 0 || DAT_007607fc != 0) {
      DAT_007607f8 = 0;
      DAT_007607fc = 0;
    }
  }
  else {
    uVar8 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
    uVar8 = -(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8;
    FUN_00649720();
    if (uVar8 == 0) goto LAB_00584b62;
  }
  iVar3 = iVar2 + 1;
  if ((iVar3 != 0) || (uVar8 != 0)) {
    *(uint **)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
    DAT_007f23d4 = DAT_007f23d4 + 1;
    iVar6 = iVar3 * 4;
    puVar4 = (uint *)((int)DAT_007f23cc - (iVar6 + 0xfU & 0xfffffff0));
    DAT_007f23cc = puVar4;
    FUN_00648600(puVar4,0,iVar6);
    bVar1 = false;
    FUN_00648600(puVar4,0,iVar6);
    uVar5 = DAT_0076f118;
    puVar7 = puVar4;
    if (DAT_00777ae0 == 0) {
      while (uVar5 != 0) {
        DAT_0076f654 = *(uint *)(uVar5 + 100);
        *puVar7 = uVar5;
        if (uVar5 == uVar8) {
          bVar1 = true;
        }
        puVar7 = puVar7 + 1;
        uVar5 = DAT_0076f654;
      }
    }
    else {
      while (uVar5 != 0) {
        DAT_0076f654 = *(uint *)(uVar5 + 100);
        *puVar7 = uVar5;
        if (uVar5 == uVar8) {
          bVar1 = true;
        }
        puVar7 = puVar7 + 1;
        uVar5 = DAT_0076f654;
      }
    }
    _DAT_0076f658 = 0;
    DAT_0076f654 = 0;
    if ((!bVar1) && (uVar8 != 0)) {
      puVar4[iVar2] = uVar8;
    }
    iVar6 = FUN_0065f190(s_NPC_Rendering_00740d44);
    if (iVar6 != 0) {
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          if ((int *)puVar4[iVar6] != (int *)0x0) {
            (**(code **)(*(int *)puVar4[iVar6] + 0x60))();
            if (param_1[0x28] != 0) {
              FUN_00553770();
              (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,0);
              FUN_00553770();
              (**(code **)(*(int *)puVar4[iVar6] + 0x68))();
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
      FUN_0065f430();
    }
    DAT_007f23cc = *(uint **)(&DAT_007f23dc + DAT_007f23d4 * 4);
    DAT_007f23d4 = DAT_007f23d4 + -1;
    param_1[0xb] = param_1[0xb] + iVar3;
    param_1[5] = *param_1;
  }
LAB_00584ce2:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

