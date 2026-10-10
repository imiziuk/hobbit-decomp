
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00416f60(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_4;
  
  puVar3 = (undefined4 *)(param_1 + 0x478);
  puVar6 = (undefined4 *)(param_1 + 0x458);
  piVar7 = (int *)(param_1 + 0x4a8);
  local_4 = 2;
  do {
    iVar5 = 2;
    if (((piVar7[2] != 2) && (iVar2 = FUN_004021c0(puVar6[4],puVar6[5]), iVar2 != 0)) &&
       (iVar2 = FUN_004d2f10(), iVar2 != 0)) {
      piVar7[2] = 2;
      iVar2 = FUN_00659e10(*piVar7);
      if (iVar2 != 0) {
        FUN_00659c80(*piVar7,0);
      }
      *piVar7 = 0;
      piVar7[-4] = 0;
      FUN_00659600(s_QuestItemSuccess_0071e4dc,1);
      puVar4 = puVar3;
      do {
        iVar2 = FUN_004021c0(*puVar4,puVar4[1]);
        if (iVar2 != 0) {
          FUN_004c77d0(0);
          FUN_004c74d0(0x3f800000);
          *(ushort *)(iVar2 + 0x15a) = *(ushort *)(iVar2 + 0x15a) & 0xbfff ^ 0x4000;
        }
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (piVar7[2] == 0) {
      iVar5 = FUN_004021c0(*puVar6,puVar6[1]);
      if ((iVar5 != 0) && (iVar5 = FUN_004d2f10(), iVar5 != 0)) {
        iVar5 = FUN_004021c0(puVar6[0x18],puVar6[0x19]);
        if (iVar5 != 0) {
          FUN_0046a550();
        }
        piVar7[2] = 1;
        piVar7[-4] = (int)_DAT_0071f4d8;
        iVar5 = 2;
        puVar4 = puVar3;
        do {
          iVar2 = FUN_004021c0(*puVar4,puVar4[1]);
          if (iVar2 != 0) {
            FUN_004c77d0(0);
            FUN_004c74d0(0x3f800000);
            *(ushort *)(iVar2 + 0x15a) = *(ushort *)(iVar2 + 0x15a) & 0xbfff ^ 0x4000;
          }
          puVar4 = puVar4 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else if (piVar7[2] == 1) {
      fVar1 = (float)piVar7[-4] - param_2;
      piVar7[-4] = (int)fVar1;
      if ((fVar1 < _DAT_0071f4d8 - _DAT_006e958c !=
           (NAN(fVar1) || NAN(_DAT_0071f4d8 - _DAT_006e958c))) && (*piVar7 == 0)) {
        iVar5 = FUN_00659600(s_CountdownClock_0071fad4,1);
        *piVar7 = iVar5;
      }
      if ((float)piVar7[-4] < DAT_006e92e4 != (NAN((float)piVar7[-4]) || NAN(DAT_006e92e4))) {
        piVar7[2] = 0;
        iVar5 = FUN_00659e10(*piVar7);
        if (iVar5 != 0) {
          FUN_00659c80(*piVar7,0);
        }
        *piVar7 = 0;
        FUN_00659600(s_QuestItemFailure_0071e668,1);
        iVar5 = 2;
        puVar4 = puVar3;
        do {
          iVar2 = FUN_004021c0(*puVar4,puVar4[1]);
          if (iVar2 != 0) {
            FUN_004c77d0(0);
            FUN_004c74d0(0xbf800000);
            *(ushort *)(iVar2 + 0x15a) = *(ushort *)(iVar2 + 0x15a) & 0xbfff ^ 0x4000;
          }
          puVar4 = puVar4 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = FUN_004021c0(*puVar6,puVar6[1]);
        if (iVar5 != 0) {
          FUN_004d2f20(0);
        }
      }
    }
    puVar6 = puVar6 + 2;
    puVar3 = puVar3 + 4;
    piVar7 = piVar7 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

