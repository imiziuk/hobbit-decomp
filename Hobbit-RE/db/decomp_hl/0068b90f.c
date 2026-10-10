
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0068b90f(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 local_58;
  uint local_18;
  undefined4 uStack_14;
  uint local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x1094) == 0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    if ((((param_2 < *(uint *)(param_1 + 0x1078)) || (*(uint *)(param_1 + 0x1080) <= param_2)) ||
        (param_3 < *(uint *)(param_1 + 0x1084))) || (*(uint *)(param_1 + 0x1088) <= param_3)) {
      iVar3 = FUN_0068b5e2();
      if (iVar3 < 0) {
        return iVar3;
      }
      uVar4 = param_2 & 0xfffffffc;
      *(uint *)(param_1 + 0x1080) = uVar4 + 4;
      *(uint *)(param_1 + 0x1088) = param_3 + 1;
      *(uint *)(param_1 + 0x1078) = uVar4;
      *(uint *)(param_1 + 0x1084) = param_3;
      if ((uVar4 < *(uint *)(param_1 + 0x10a4)) ||
         (*(uint *)(param_1 + 0x10a4) = uVar4, param_4 != 0)) {
        if ((*(int *)(param_1 + 4) == 0x32545844) || (*(int *)(param_1 + 4) == 0x34545844)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        uVar4 = *(uint *)(param_1 + 0x1074);
        if (uVar4 < *(uint *)(param_1 + 0x107c)) {
          do {
            iVar3 = *(int *)(param_1 + 4);
            if (iVar3 == 0x31545844) {
              FUN_0069082c((param_2 >> 2) * *(int *)(param_1 + 0x1048) +
                           *(int *)(param_1 + 0x104c) * param_3 + (uVar4 >> 2) * 8 +
                           *(int *)(param_1 + 0x18),&local_58);
            }
            else if ((iVar3 == 0x32545844) || (iVar3 == 0x33545844)) {
              FUN_00691173((param_2 >> 2) * *(int *)(param_1 + 0x1048) +
                           *(int *)(param_1 + 0x104c) * param_3 + (uVar4 >> 2) * 0x10 +
                           *(int *)(param_1 + 0x18),&local_58);
            }
            else if ((iVar3 == 0x34545844) || (iVar3 == 0x35545844)) {
              FUN_006911c1((param_2 >> 2) * *(int *)(param_1 + 0x1048) +
                           *(int *)(param_1 + 0x104c) * param_3 + (uVar4 >> 2) * 0x10 +
                           *(int *)(param_1 + 0x18),&local_58);
            }
            puVar6 = &local_58;
            piVar7 = (int *)(param_1 + 0x1064);
            local_c = 4;
            do {
              local_8 = 4;
              pfVar5 = (float *)((uVar4 - *(int *)(param_1 + 0x1074)) * 0x10 + *piVar7);
              do {
                local_10 = (uint)*(byte *)((int)puVar6 + 3);
                uStack_14 = 0;
                pfVar5[3] = (float)*(byte *)((int)puVar6 + 3) * _DAT_006ed3a4;
                local_10 = (uint)*(byte *)((int)puVar6 + 2);
                *pfVar5 = (float)*(byte *)((int)puVar6 + 2) * _DAT_006ed3a4;
                local_10 = (uint)*(byte *)((int)puVar6 + 1);
                pfVar5[1] = (float)*(byte *)((int)puVar6 + 1) * _DAT_006ed3a4;
                local_18 = *puVar6 & 0xff;
                pfVar5[2] = (float)(*puVar6 & 0xff) * _DAT_006ed3a4;
                if (bVar2) {
                  if (NAN(pfVar5[3]) == (pfVar5[3] == 0.0)) {
                    if (1.0 <= pfVar5[3]) goto LAB_0068bb83;
                    if (*pfVar5 < pfVar5[3] == (NAN(*pfVar5) || NAN(pfVar5[3]))) {
                      fVar1 = 1.0;
                    }
                    else {
                      fVar1 = *pfVar5 / pfVar5[3];
                    }
                    *pfVar5 = fVar1;
                    if (pfVar5[1] < pfVar5[3] == (NAN(pfVar5[1]) || NAN(pfVar5[3]))) {
                      fVar1 = 1.0;
                    }
                    else {
                      fVar1 = pfVar5[1] / pfVar5[3];
                    }
                    pfVar5[1] = fVar1;
                    if (pfVar5[2] < pfVar5[3] == (NAN(pfVar5[2]) || NAN(pfVar5[3]))) {
                      fVar1 = 1.0;
                    }
                    else {
                      fVar1 = pfVar5[2] / pfVar5[3];
                    }
                  }
                  else {
                    *pfVar5 = 0.0;
                    pfVar5[1] = 0.0;
                    fVar1 = 0.0;
                  }
                  pfVar5[2] = fVar1;
                }
LAB_0068bb83:
                pfVar5 = pfVar5 + 4;
                puVar6 = puVar6 + 1;
                local_8 = local_8 + -1;
              } while (local_8 != 0);
              piVar7 = piVar7 + 1;
              local_c = local_c + -1;
            } while (local_c != 0);
            uVar4 = uVar4 + 4;
          } while (uVar4 < *(uint *)(param_1 + 0x107c));
        }
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}

