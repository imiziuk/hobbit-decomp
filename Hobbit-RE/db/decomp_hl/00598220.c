
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00598220(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__GetClosestTurn_00743190);
  local_4 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar1 = FUN_00592920();
  iVar1 = FUN_005b73c0(*(undefined4 *)(iVar1 + 0x1b0),0x3b,*(undefined4 *)(param_1 + 0x10c),
                       &local_20);
  do {
    if (iVar1 == 0) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return local_24;
    }
    local_20 = local_20 + 1;
    if (local_24 == 0) {
LAB_005984c8:
      local_24 = iVar1;
    }
    else {
      uVar2 = FUN_00592190();
      FUN_00549470(uVar2);
      FUN_00549580(uVar2);
      uVar2 = FUN_00592190();
      local_1c = (float)FUN_00549470(uVar2);
      FUN_00549580(uVar2);
      iVar3 = FUN_0053cc70(local_24 + 8);
      local_1c = (float)(uint)*(ushort *)(iVar3 * 0x50 + 0x32 + *(int *)((int)local_1c + 0x58));
      local_18 = (float)(int)local_1c * _DAT_006f3c10;
      uVar2 = FUN_00592190();
      FUN_00549470(uVar2);
      FUN_00549580(uVar2);
      uVar2 = FUN_00592190();
      local_1c = (float)FUN_00549470(uVar2);
      FUN_00549580(uVar2);
      iVar3 = FUN_0053cc70(iVar1 + 8);
      fVar4 = ((float10)*(ushort *)(iVar3 * 0x50 + 0x32 + *(int *)((int)local_1c + 0x58)) *
               (float10)_DAT_006f3c10 - (float10)param_2) + (float10)_DAT_006e9368;
      local_1c = (float)fVar4;
      if (((float10)_DAT_006e95a0 < fVar4) ||
         (fVar4 < (float10)_DAT_006e959c != (NAN(fVar4) || NAN((float10)_DAT_006e959c)))) {
        fVar4 = (float10)FUN_0064c6b0(local_1c,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar4) {
        do {
          fVar4 = fVar4 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar4);
      }
      if (fVar4 < (float10)DAT_006e92e4 != (NAN(fVar4) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar4 = fVar4 + (float10)_DAT_006e9598;
        } while (fVar4 < (float10)DAT_006e92e4 != (NAN(fVar4) || NAN((float10)DAT_006e92e4)));
      }
      fVar4 = fVar4 - (float10)_DAT_006e9368;
      if (fVar4 < (float10)DAT_006e92e4 != (NAN(fVar4) || NAN((float10)DAT_006e92e4))) {
        fVar4 = -fVar4;
      }
      local_1c = (float)fVar4;
      fVar4 = ((float10)local_18 - (float10)param_2) + (float10)_DAT_006e9368;
      local_18 = (float)fVar4;
      if (((float10)_DAT_006e95a0 < fVar4) ||
         (fVar4 < (float10)_DAT_006e959c != (NAN(fVar4) || NAN((float10)_DAT_006e959c)))) {
        fVar4 = (float10)FUN_0064c6b0(local_18,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar4) {
        do {
          fVar4 = fVar4 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar4);
      }
      if (fVar4 < (float10)DAT_006e92e4 != (NAN(fVar4) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar4 = fVar4 + (float10)_DAT_006e9598;
        } while (fVar4 < (float10)DAT_006e92e4 != (NAN(fVar4) || NAN((float10)DAT_006e92e4)));
      }
      fVar4 = fVar4 - (float10)_DAT_006e9368;
      if (fVar4 < (float10)DAT_006e92e4 != (NAN(fVar4) || NAN((float10)DAT_006e92e4))) {
        fVar4 = -fVar4;
      }
      if ((float10)local_1c < fVar4 != (NAN((float10)local_1c) || NAN(fVar4))) goto LAB_005984c8;
    }
    iVar1 = FUN_00592920();
    iVar1 = FUN_005b73c0(*(undefined4 *)(iVar1 + 0x1b0),0x3b,*(undefined4 *)(param_1 + 0x10c),
                         &local_20);
  } while( true );
}

