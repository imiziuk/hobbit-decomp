
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_006768b0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined1 local_84 [40];
  int local_5c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6c55;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_2[4] + 8);
  local_bc = *param_2;
  local_b8 = 0;
  DAT_007f871c = DAT_007f871c + param_4;
  local_c0 = param_4;
  if (param_2[2] - local_bc <= param_4) {
    local_c0 = param_2[2] - local_bc;
  }
  ExceptionList = &local_c;
  iVar3 = FUN_006762a0(param_2);
  do {
    if (local_c0 < 1) {
      FUN_00676390(iVar3);
      *param_2 = local_bc;
      ExceptionList = local_c;
      return local_b8;
    }
    uVar6 = param_2[1] + local_bc;
    iVar9 = (int)uVar6 >> 0x1f;
    if (*(int *)(iVar3 + 0x140) == 0) {
LAB_00676a4b:
      FUN_00649600(s_IOFS___ReadCacheMiss_007507e4);
      local_4 = 1;
      iVar9 = 0x800;
      iVar5 = 0;
      FUN_00680660();
      local_4._0_1_ = 2;
      if (iVar1 != 0) {
        iVar9 = *(int *)(*(int *)(param_2[4] + 8) + 8);
      }
      iVar7 = uVar6 - (int)uVar6 % iVar9;
      iVar8 = *(int *)(param_2[4] + 0x10) - iVar7;
      iVar9 = *(int *)(iVar3 + 0x13c);
      if (iVar8 <= *(int *)(iVar3 + 0x13c)) {
        iVar9 = iVar8;
      }
      _DAT_007f8720 = _DAT_007f8720 + iVar9;
      while( true ) {
        if (*(int *)(param_1 + 0x170) < iVar5) {
          do {
            FUN_00653be0(1);
          } while( true );
        }
        *(undefined4 *)(iVar3 + 0x138) = 0;
        *(undefined4 *)(iVar3 + 0x140) = 0;
        *(undefined4 *)(iVar3 + 0x28) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x2c) = 0x7fffffff;
        iVar5 = iVar5 + 1;
        FUN_006806b0(param_2,*(undefined4 *)(iVar3 + 0x148),iVar7,iVar9,1,1,0,0,0);
        FUN_00677150(local_84);
        FUN_006559a0(1);
        if (local_5c == 4) break;
        FUN_00653be0(1);
      }
      *(int *)(iVar3 + 0x28) = iVar7;
      *(int *)(iVar3 + 0x2c) = iVar7 >> 0x1f;
      *(int *)(iVar3 + 0x138) = iVar9;
      *(undefined4 *)(iVar3 + 0x140) = 1;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_006806a0();
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x2c);
      uVar2 = *(uint *)(iVar3 + 0x28);
      if ((iVar9 < iVar5) || ((iVar9 <= iVar5 && (uVar6 < uVar2)))) goto LAB_00676a4b;
      if (*(int *)(iVar3 + 0x140) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar3 + 0x138);
      }
      iVar5 = (((int)uVar4 >> 0x1f) + iVar5 + (uint)CARRY4(uVar4,uVar2)) -
              (uint)(uVar4 + uVar2 == 0);
      if ((iVar5 < iVar9) || ((iVar5 <= iVar9 && ((uVar4 + uVar2) - 1 < uVar6)))) goto LAB_00676a4b;
      FUN_00649600(s_IOFS___ReadCacheHit_007507d0);
      iVar9 = *(int *)(iVar3 + 0x28);
      local_4 = 0;
      if (*(int *)(iVar3 + 0x140) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar3 + 0x138);
      }
      iVar8 = local_c0;
      if ((int)((iVar5 - uVar6) + iVar9) <= local_c0) {
        if (*(int *)(iVar3 + 0x140) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar3 + 0x138);
        }
        iVar8 = (iVar5 - uVar6) + iVar9;
      }
      FUN_00648480(param_3,(*(int *)(iVar3 + 0x148) - iVar9) + uVar6,iVar8);
      local_bc = local_bc + iVar8;
      local_b8 = local_b8 + iVar8;
      local_c0 = local_c0 - iVar8;
      param_3 = param_3 + iVar8;
    }
    local_4 = 0xffffffff;
    FUN_00649720();
  } while( true );
}

