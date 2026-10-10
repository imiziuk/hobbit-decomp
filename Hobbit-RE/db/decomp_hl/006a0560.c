
/* WARNING: Removing unreachable block (ram,0x006a05a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_006a0560(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  longlong lVar11;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  do {
    iVar8 = 0;
    local_80 = (int *)(param_2 + 0x20);
    bVar9 = false;
    lVar11 = FUN_00660320();
    if (lVar11 < 100) {
      FUN_00671130(0x97,0);
      uVar1 = __ftol();
      *(undefined4 *)(param_2 + 0x38) = uVar1;
      FUN_00671130(0x98,0);
      uVar1 = __ftol();
      *(undefined4 *)(param_2 + 0x3c) = uVar1;
    }
    if (*local_80 == 0) {
      piVar2 = (int *)FUN_006a04d0(param_2,*(undefined4 *)(param_2 + 0x38),
                                   *(undefined4 *)(param_2 + 0x3c));
      piVar5 = *(int **)(param_2 + 0x24);
      if (piVar2 != piVar5) {
        if (piVar5 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar5 + 0x18))();
          if (iVar3 == 0) {
            (**(code **)(**(int **)(param_2 + 0x24) + 0x60))(piVar2);
          }
          else {
            piVar2 = *(int **)(param_2 + 0x24);
          }
        }
        *(int **)(param_2 + 0x24) = piVar2;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x5c))(piVar2);
        }
      }
      local_80 = (int *)(param_2 + 0x24);
    }
    uVar1 = param_1;
    uVar4 = FUN_006710d0(0x8b,0,param_1);
    FUN_0069df40(param_2 + 0x48,uVar4,uVar1);
    uVar1 = param_1;
    uVar4 = FUN_006710d0(0x8c,0,param_1);
    FUN_0069df40(param_2 + 0x70,uVar4,uVar1);
    uVar1 = param_1;
    uVar4 = FUN_006710d0(0x8d,0,param_1);
    FUN_0069df40(param_2 + 0x98,uVar4,uVar1);
    iVar3 = FUN_00670ef0(0x7b,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x165,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0xc0,iVar3,param_1);
    iVar3 = FUN_00670ef0(0x7d,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x16d,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x110,iVar3,param_1);
    iVar3 = FUN_00670ef0(0x7e,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x168,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x160,iVar3,param_1);
    iVar3 = FUN_00670ef0(0x7c,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x16a,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x1b0,iVar3,param_1);
    local_1c = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_14 = 0;
    local_28 = 0;
    local_24 = 0;
    local_4 = 0;
    FUN_0042b9b0(6,&local_28);
    iVar3 = 0;
    local_7c = 0;
    if (local_20 < 1) {
LAB_006a07e4:
      iVar3 = FUN_00670ef0(0xb9,0);
      if ((iVar3 != 0) ||
         ((iVar3 = FUN_00670ef0(0x8b,0), iVar3 != 0 && (iVar3 = FUN_006a0390(param_2), iVar3 != 0)))
         ) goto LAB_006a0818;
      uVar1 = 0;
    }
    else {
      do {
        if (iVar3 == 0) {
          uVar4 = 0;
          uVar1 = FUN_0042b100(*(undefined4 *)(local_1c + local_7c * 4));
          iVar3 = FUN_00670ef0(uVar1,uVar4);
          if (iVar3 != 0) goto LAB_006a07ca;
        }
        else {
LAB_006a07ca:
          iVar3 = 1;
        }
        local_7c = local_7c + 1;
      } while (local_7c < local_20);
      if (iVar3 == 0) goto LAB_006a07e4;
LAB_006a0818:
      uVar1 = 1;
    }
    FUN_0069df40(param_2 + 0x200,uVar1,param_1);
    iVar3 = FUN_00670ef0(0x5e,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x9e,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x250,iVar3,param_1);
    iVar3 = FUN_00670ef0(0x5b,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x170,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x2a0,iVar3,param_1);
    iVar3 = FUN_00670ef0(0x61,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x166,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x340,iVar3,param_1);
    iVar3 = FUN_00670ef0(0x62,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x16e,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x390,iVar3,param_1);
    iVar3 = FUN_00670ef0(0x5f,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x164,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x3e0,iVar3,param_1);
    iVar3 = FUN_00670ef0(0x60,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x16c,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x430,iVar3,param_1);
    iVar3 = FUN_00670ef0(100,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0xd6,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    FUN_0069df40(param_2 + 0x2f0,iVar3,param_1);
    uVar1 = param_1;
    fVar10 = (float10)FUN_00671130(0x81,0,param_1);
    FUN_0069e010(param_2 + 0x480,(float)fVar10,uVar1);
    uVar1 = param_1;
    fVar10 = (float10)FUN_00671130(0x81,0,param_1);
    FUN_0069e010(param_2 + 0x4d0,(float)fVar10,uVar1);
    uVar1 = param_1;
    fVar10 = (float10)FUN_00671130(0x80,0,param_1);
    FUN_0069e010(param_2 + 0x520,(float)fVar10,uVar1);
    fVar10 = (float10)FUN_00671130(0x80,0,param_1);
    FUN_0069e010(param_2 + 0x570,(float)fVar10,param_1);
    piVar5 = (int *)*local_80;
    if (piVar5 != (int *)0x0) {
      if ((*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x38)) ||
         (*(int *)(param_2 + 0x44) != *(int *)(param_2 + 0x3c))) {
        (**(code **)(*piVar5 + 0x58))
                  (piVar5,*(int *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
      }
      piVar5 = (int *)*local_80;
      if (piVar5 != (int *)0x0) {
        if (*(int *)(param_2 + 100) != 0) {
          (**(code **)(*piVar5 + 0x40))(piVar5);
        }
        piVar5 = (int *)*local_80;
        if (piVar5 != (int *)0x0) {
          if (*(int *)(param_2 + 0x6c) != 0) {
            (**(code **)(*piVar5 + 0x44))(piVar5);
          }
          piVar5 = (int *)*local_80;
          if (piVar5 != (int *)0x0) {
            if (*(int *)(param_2 + 0x8c) != 0) {
              (**(code **)(*piVar5 + 0x48))(piVar5);
            }
            piVar5 = (int *)*local_80;
            if (piVar5 != (int *)0x0) {
              if (*(int *)(param_2 + 0x94) != 0) {
                (**(code **)(*piVar5 + 0x4c))(piVar5);
              }
              piVar5 = (int *)*local_80;
              if (piVar5 != (int *)0x0) {
                if (*(int *)(param_2 + 0xb4) != 0) {
                  (**(code **)(*piVar5 + 0x50))(piVar5);
                }
                piVar5 = (int *)*local_80;
                if ((piVar5 != (int *)0x0) && (*(int *)(param_2 + 0xbc) != 0)) {
                  (**(code **)(*piVar5 + 0x54))(piVar5);
                }
              }
            }
          }
        }
      }
      iVar3 = 0;
      iVar6 = 0;
      local_74 = 0;
      local_68 = 0;
      local_5c = 0;
      local_50 = 0;
      local_78 = 0;
      local_6c = 0;
      local_60 = 0;
      local_54 = 0;
      local_7c = 0;
      local_70 = 0;
      local_64 = 0;
      local_58 = 0;
      iVar7 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      piVar5 = (int *)(param_2 + 0x26c);
      local_3c = 2;
      do {
        iVar3 = iVar3 + piVar5[-0x14];
        iVar7 = iVar7 + piVar5[0x14];
        iVar6 = iVar6 + *piVar5;
        local_4c = local_4c + piVar5[0x3d] + piVar5[0x3c];
        local_48 = local_48 + piVar5[0x51] + piVar5[0x50];
        iVar8 = iVar8 + piVar5[0x28];
        local_44 = local_44 + piVar5[0x65] + piVar5[100];
        local_40 = local_40 + piVar5[0x79] + piVar5[0x78];
        local_74 = local_74 + piVar5[-100] + piVar5[0x8c];
        local_68 = local_68 + piVar5[-0x50] + piVar5[0xa0];
        local_5c = local_5c + piVar5[-0x3c] + piVar5[0xb4];
        local_50 = local_50 + piVar5[-0x28] + piVar5[200];
        local_78 = local_78 + piVar5[-99] + piVar5[0x8d];
        local_6c = local_6c + piVar5[-0x4f] + piVar5[0xa1];
        local_60 = local_60 + piVar5[-0x3b] + piVar5[0xb5];
        local_54 = local_54 + piVar5[-0x27] + piVar5[0xc9];
        local_7c = local_7c + piVar5[-100] + piVar5[-99] + piVar5[0x8c] + piVar5[0x8d];
        local_64 = local_64 + piVar5[-0x3c] + piVar5[-0x3b] + piVar5[0xb4] + piVar5[0xb5];
        local_70 = local_70 + piVar5[-0x50] + piVar5[-0x4f] + piVar5[0xa0] + piVar5[0xa1];
        local_58 = local_58 + piVar5[-0x28] + piVar5[-0x27] + piVar5[200] + piVar5[0xc9];
        piVar5 = piVar5 + 10;
        local_3c = local_3c + -1;
      } while (local_3c != 0);
      _DAT_00813040 = 0;
      piVar5 = (int *)*local_80;
      if (piVar5 != (int *)0x0) {
        bVar9 = local_7c != 0;
        if (bVar9) {
          (**(code **)(*piVar5 + 0x6c))(piVar5,0,local_74,local_78);
        }
        piVar5 = (int *)*local_80;
        if (piVar5 != (int *)0x0) {
          if (local_70 != 0) {
            (**(code **)(*piVar5 + 0x6c))(piVar5,1,local_68,local_6c);
          }
          bVar9 = local_70 != 0 || bVar9;
          piVar5 = (int *)*local_80;
          if (piVar5 != (int *)0x0) {
            if (local_64 != 0) {
              (**(code **)(*piVar5 + 0x6c))(piVar5,2,local_5c,local_60);
            }
            bVar9 = local_64 != 0 || bVar9;
            piVar5 = (int *)*local_80;
            if (piVar5 != (int *)0x0) {
              if (local_58 != 0) {
                (**(code **)(*piVar5 + 0x6c))(piVar5,3,local_50,local_54);
              }
              bVar9 = local_58 != 0 || bVar9;
              piVar5 = (int *)*local_80;
              if (piVar5 != (int *)0x0) {
                if (iVar3 != 0) {
                  (**(code **)(*piVar5 + 0x70))(piVar5);
                }
                bVar9 = iVar3 != 0 || bVar9;
                piVar5 = (int *)*local_80;
                if (piVar5 != (int *)0x0) {
                  if (iVar6 != 0) {
                    (**(code **)(*piVar5 + 0x74))(piVar5);
                  }
                  bVar9 = iVar6 != 0 || bVar9;
                  piVar5 = (int *)*local_80;
                  if (piVar5 != (int *)0x0) {
                    if (iVar7 != 0) {
                      (**(code **)(*piVar5 + 0x78))(piVar5);
                    }
                    bVar9 = iVar7 != 0 || bVar9;
                    piVar5 = (int *)*local_80;
                    if (piVar5 != (int *)0x0) {
                      if (iVar8 != 0) {
                        (**(code **)(*piVar5 + 0x7c))(piVar5);
                      }
                      bVar9 = iVar8 != 0 || bVar9;
                      piVar5 = (int *)*local_80;
                      if (piVar5 != (int *)0x0) {
                        if (local_4c != 0) {
                          (**(code **)(*piVar5 + 0x80))(piVar5,0xffffffff);
                        }
                        bVar9 = local_4c != 0 || bVar9;
                        piVar5 = (int *)*local_80;
                        if (piVar5 != (int *)0x0) {
                          if (local_48 != 0) {
                            (**(code **)(*piVar5 + 0x80))(piVar5,1);
                          }
                          bVar9 = local_48 != 0 || bVar9;
                          piVar5 = (int *)*local_80;
                          if (piVar5 != (int *)0x0) {
                            if (local_44 != 0) {
                              (**(code **)(*piVar5 + 0x84))(piVar5,0xffffffff);
                            }
                            bVar9 = local_44 != 0 || bVar9;
                            local_80 = (int *)*local_80;
                            if ((local_80 != (int *)0x0) && (local_40 != 0)) {
                              bVar9 = true;
                              (**(code **)(*local_80 + 0x84))(local_80,1);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x3c);
    param_1 = 0;
    local_4 = 0xffffffff;
    if (local_14 != 2) {
      FUN_006bf840(local_1c);
    }
    if (!bVar9) {
      iVar8 = FUN_00670ef0(2,0);
      ExceptionList = local_c;
      return iVar8 == 0;
    }
  } while( true );
}

