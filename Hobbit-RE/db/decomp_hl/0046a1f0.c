
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046a1f0(int param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0fa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_cinema__OnAdvanceLogic_00726c6c);
  iVar5 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    if ((*(byte *)(param_1 + 0x194) & 0x20) != 0) {
      FUN_0046a550();
      *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) & 0xffffffdf;
    }
    if ((*(uint *)(param_1 + 0x194) & 4) != 0) {
      _DAT_0075eb9c = DAT_006e92e4;
      if ((*(uint *)(param_1 + 0x194) >> 0xf & 1) != 0) {
        _DAT_0075eb9c = _DAT_006e99b0;
      }
      if ((*(char *)(param_1 + 0x194) < '\0') && ((*(ushort *)(param_1 + 0x128) & 4) == 0)) {
        if ((*(ushort *)(param_1 + 0x128) & 2) == 0) {
          FUN_0064e870(6,s_Executing_pre_cinematic_transiti_00726c44);
          (**(code **)(*(int *)(param_1 + 0x118) + 4))();
        }
        (**(code **)(*(int *)(param_1 + 0x118) + 8))(param_2);
      }
      else if ((int)*(short *)(param_1 + 0x18e) == *(int *)(param_1 + 0xb0)) {
        FUN_0046aaf0(param_2);
      }
      else {
        iVar3 = FUN_0046a1b0();
        if ((iVar3 == 0) || ((*(uint *)(param_1 + 0x194) & 0x20000) != 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        *(uint *)(param_1 + 0x194) =
             (iVar3 << 0x12 ^ *(uint *)(param_1 + 0x194)) & 0x40000 ^ *(uint *)(param_1 + 0x194);
        iVar3 = FUN_0046a1b0();
        *(uint *)(param_1 + 0x194) =
             (iVar3 << 0x11 ^ *(uint *)(param_1 + 0x194)) & 0x20000 ^ *(uint *)(param_1 + 0x194);
        iVar3 = FUN_0046a150();
        if ((iVar3 == 0) || ((*(uint *)(param_1 + 0x194) & 0x80000) != 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        *(uint *)(param_1 + 0x194) =
             (iVar3 << 0x15 ^ *(uint *)(param_1 + 0x194)) & 0x200000 ^ *(uint *)(param_1 + 0x194);
        iVar3 = FUN_0046a150();
        *(uint *)(param_1 + 0x194) =
             (iVar3 << 0x13 ^ *(uint *)(param_1 + 0x194)) & 0x80000 ^ *(uint *)(param_1 + 0x194);
        iVar3 = FUN_00472f30();
        if ((iVar3 == 0) || ((*(uint *)(param_1 + 0x194) & 0x200000) == 0)) {
          fVar2 = param_2 + *(float *)(param_1 + 0x1b4);
          *(float *)(param_1 + 0x1b4) = fVar2;
          if (((*(uint *)(param_1 + 0x194) & 0x100) != 0) &&
             (fVar2 = *(float *)(param_1 + 0x1bc) - fVar2,
             fVar2 < *(float *)(param_1 + 0x158) != (fVar2 == *(float *)(param_1 + 0x158)))) {
            if ((*(ushort *)(param_1 + 0x160) & 2) == 0) {
              FUN_0064e870(6,s_Executing_post_cinematic_transit_00726c10);
              (**(code **)(*(int *)(param_1 + 0x150) + 4))();
            }
            else if ((*(ushort *)(param_1 + 0x160) & 4) == 0) {
              (**(code **)(*(int *)(param_1 + 0x150) + 8))(param_2);
            }
          }
          FUN_00472b60(param_2);
          iVar3 = *(int *)(param_1 + 0xe8);
          local_18 = 0.0;
          if (0 < iVar3) {
            do {
              piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xec) + iVar5 * 4) + 0x30);
              if (piVar1 != (int *)0x0) {
                if ((*(byte *)(piVar1 + 4) & 2) != 0) {
                  (**(code **)(*piVar1 + 8))(param_2);
                }
                iVar4 = FUN_00472f30();
                if (((iVar4 != 0) && (*(short *)((int)piVar1 + 0xe) == *(short *)(param_1 + 0x18e)))
                   && ((*(uint *)(param_1 + 0x194) & 0x40000) != 0)) {
                  DAT_0075cd08 = 1;
                  fVar6 = (float10)(**(code **)(*piVar1 + 0x34))();
                  if ((float10)local_18 < fVar6) {
                    local_18 = (float)fVar6;
                  }
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
          }
          *(float *)(param_1 + 0x1b8) = local_18 + *(float *)(param_1 + 0x1b8);
        }
        else {
          FUN_00473020();
        }
      }
    }
    if ((*(byte *)(param_1 + 0x194) & 0x24) == 0) {
      *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 8;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

