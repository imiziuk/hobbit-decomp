
void FUN_00646180(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  float *pfVar7;
  undefined1 local_164 [4];
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_12c [32];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6091;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  pbVar6 = (byte *)*param_1;
  bVar1 = *pbVar6;
  bVar4 = false;
  pfVar7 = (float *)(param_1 + 1);
  local_4 = 0;
  do {
    if (bVar1 == 0) {
      FUN_00647d70(&DAT_007ccd18,local_158,0x1ff);
      DAT_007ccf17 = 0;
      *param_1 = &DAT_007ccd18;
      local_4 = 0xffffffff;
      FUN_00649ba0();
      ExceptionList = local_c;
      return;
    }
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar5 = (uint)local_15c >> 8;
    local_15c = CONCAT31((int3)uVar5,bVar1);
    if (bVar4) {
      if (bVar4) {
        cVar2 = (&DAT_0074c290)[bVar1];
        switch(cVar2) {
        case '%':
          FUN_0064a720();
        default:
          bVar4 = false;
          break;
        case 'D':
        case 'X':
          fVar3 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          if (cVar2 == 'D') {
            FUN_00649920(local_160,&DAT_007328e4,fVar3);
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00649940();
            FUN_00647d10(local_10c);
LAB_00646282:
            local_4 = local_4 & 0xffffff00;
            FUN_00649950();
          }
          else if (cVar2 == 'X') {
            FUN_00649920(local_164,&DAT_0074ba60,fVar3);
            local_4 = CONCAT31(local_4._1_3_,2);
            FUN_00649940();
            FUN_00647d10(local_10c);
            goto LAB_00646282;
          }
          if (bVar1 == 0x58) {
            FUN_00648080();
          }
          FUN_0064a750();
          bVar4 = false;
          break;
        case 'F':
          fVar3 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          FUN_0064f190(local_12c,&DAT_00725bec,(double)fVar3);
          FUN_0064a750();
          bVar4 = false;
          break;
        case 'S':
          pfVar7 = pfVar7 + 1;
          FUN_0064a750();
          bVar4 = false;
        }
      }
    }
    else if (bVar1 == 0x25) {
      bVar4 = true;
    }
    else {
      FUN_0064a720();
    }
    bVar1 = *pbVar6;
  } while( true );
}

