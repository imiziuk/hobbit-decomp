
undefined4 * __thiscall FUN_004abdf0(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 local_4b0 [2];
  undefined1 local_4a8 [511];
  undefined1 local_2a9;
  undefined4 local_260;
  uint local_25c;
  undefined4 local_258;
  undefined1 local_250 [592];
  
  FUN_00425440();
  iVar3 = FUN_00647cf0(s_LocalBBox_00724d04);
  iVar4 = FUN_00647e80(param_3,s_LocalBBox_00724d04,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_4b0[0] = 9;
      FUN_004357e0(param_1 + 0x2c);
      FUN_004357e0(param_1 + 0x38);
      *param_2 = local_4b0[0];
      puVar5 = local_4a8;
      goto LAB_004ac474;
    }
    iVar4 = FUN_004d0700(iVar3 + param_3,local_4b0,&DAT_007278f4,param_1 + 0x2c);
    if ((iVar4 != 0) ||
       (iVar3 = FUN_004d0700(iVar3 + param_3,local_4b0,&DAT_007278ec,param_1 + 0x38), iVar3 != 0)) {
      *param_2 = local_4b0[0];
      puVar5 = local_4a8;
      goto LAB_004ac474;
    }
  }
  FUN_00425440();
  iVar3 = FUN_00647cf0(s_WorldBBox_00724d10);
  iVar4 = FUN_00647e80(param_3,s_WorldBBox_00724d10,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_4b0[0] = 9;
      FUN_00480f60(param_1 + 0x44);
      puVar5 = local_4a8;
      *param_2 = local_4b0[0];
      goto LAB_004ac474;
    }
    iVar4 = FUN_004d0700(iVar3 + param_3,local_4b0,&DAT_007278f4,param_1 + 0x44);
    if ((iVar4 != 0) ||
       (iVar3 = FUN_004d0700(iVar3 + param_3,local_4b0,&DAT_007278ec,param_1 + 0x50), iVar3 != 0)) {
      puVar5 = local_4a8;
      *param_2 = local_4b0[0];
      goto LAB_004ac474;
    }
  }
  FUN_00425440();
  iVar3 = FUN_00647cf0(s_Position_00724d1c);
  iVar4 = FUN_00647e80(param_3,s_Position_00724d1c,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_4b0[0] = 8;
      FUN_004357e0((undefined4 *)(param_1 + 0x14));
      *param_2 = local_4b0[0];
      puVar5 = local_4a8;
      goto LAB_004ac474;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00724e78,iVar3);
    if (iVar4 == 0) {
      local_260 = *(undefined4 *)(param_1 + 0x14);
    }
    else {
      iVar4 = FUN_00647e40(&DAT_00724e74,iVar3);
      if (iVar4 == 0) {
        local_260 = *(undefined4 *)(param_1 + 0x18);
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
        if (iVar3 != 0) goto LAB_004ac056;
        local_260 = *(undefined4 *)(param_1 + 0x1c);
      }
    }
    local_4b0[0] = 2;
    *param_2 = 2;
    puVar5 = local_4a8;
    goto LAB_004ac474;
  }
LAB_004ac056:
  FUN_00425440();
  iVar3 = FUN_00647cf0(s_Rotation_007207f0);
  iVar4 = FUN_00647e80(param_3,s_Rotation_007207f0,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_4b0[0] = 0xb;
      FUN_004357e0(param_1 + 0x68);
      *param_2 = local_4b0[0];
      puVar5 = local_4a8;
      goto LAB_004ac474;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_004ad2b0(iVar3,local_4b0,s__Pitch_007207e8,param_1 + 0x68);
    if (((iVar4 != 0) ||
        (iVar4 = FUN_004ad2b0(iVar3,local_4b0,&DAT_007207e0,param_1 + 0x6c), iVar4 != 0)) ||
       (iVar3 = FUN_004ad2b0(iVar3,local_4b0,s__Roll_007207d8,param_1 + 0x70), iVar3 != 0)) {
      *param_2 = local_4b0[0];
      puVar5 = local_4a8;
      goto LAB_004ac474;
    }
  }
  iVar3 = FUN_00647e40(param_3,&DAT_00725c94);
  if (iVar3 == 0) {
    FUN_00425440();
    local_4b0[0] = 4;
    FUN_00647d70(local_4a8,*(undefined4 *)(param_1 + 0xa0),0x200);
    puVar5 = local_4a8;
    local_2a9 = 0;
    *param_2 = local_4b0[0];
  }
  else {
    iVar3 = FUN_00647e40(param_3,&DAT_0072b9ac);
    if (iVar3 == 0) {
      FUN_00425440();
      bVar1 = *(byte *)(param_1 + 0x7f);
      local_4b0[0] = 3;
      *param_2 = 3;
      puVar5 = local_4a8;
      local_25c = bVar1 & 1;
    }
    else {
      iVar3 = FUN_00647e40(param_3,s_Does_Not_Collide_0072b980);
      if (iVar3 == 0) {
        FUN_00425440();
        bVar1 = *(byte *)(param_1 + 0x7a);
        puVar5 = local_4a8;
        local_4b0[0] = 3;
        *param_2 = 3;
        local_25c = (bVar1 & 4) >> 2;
      }
      else {
        iVar3 = FUN_00647e40(param_3,s_Bilbo_Does_Not_Collide_0072b968);
        if (iVar3 == 0) {
          FUN_00425440();
          uVar2 = *(ushort *)(param_1 + 0x7a);
          puVar5 = local_4a8;
          local_4b0[0] = 3;
          *param_2 = 3;
          local_25c = (uVar2 & 0x200) >> 9;
        }
        else {
          iVar3 = FUN_00647e40(param_3,s_NPC_Does_Not_Collide_0072b950);
          if (iVar3 == 0) {
            FUN_00425440();
            uVar2 = *(ushort *)(param_1 + 0x7a);
            local_4b0[0] = 3;
            *param_2 = 3;
            puVar5 = local_4a8;
            local_25c = (uVar2 & 0x400) >> 10;
          }
          else {
            iVar3 = FUN_00647e40(param_3,s_Does_Camera_Collision_0072b938);
            if (iVar3 == 0) {
              FUN_00425440();
              bVar1 = *(byte *)(param_1 + 0x7a);
              puVar5 = local_4a8;
              local_4b0[0] = 3;
              *param_2 = 3;
              local_25c = (bVar1 & 0x10) >> 4;
            }
            else {
              iVar3 = FUN_00647e40(param_3,s_Does_Camera_Fade_0072b924);
              if (iVar3 == 0) {
                FUN_00425440();
                bVar1 = *(byte *)(param_1 + 0x7a);
                puVar5 = local_4a8;
                local_4b0[0] = 3;
                *param_2 = 3;
                local_25c = (bVar1 & 0x20) >> 5;
              }
              else {
                iVar3 = FUN_00647e40(param_3,s_Does_Lighting_Use_Normals_0072b908);
                if (iVar3 == 0) {
                  FUN_00406a80();
                  bVar1 = *(byte *)(param_1 + 0x7a);
                  local_4b0[0] = 3;
                  *param_2 = 3;
                  puVar5 = local_4a8;
                  local_25c = (uint)(bVar1 >> 7);
                }
                else {
                  iVar3 = FUN_00647e40(param_3,s_Does_Lighting_Cast_Shadows_0072b8ec);
                  if (iVar3 == 0) {
                    FUN_00406a80();
                    bVar1 = *(byte *)(param_1 + 0x7b);
                    puVar5 = local_4a8;
                    local_4b0[0] = 3;
                    *param_2 = 3;
                    local_25c = bVar1 & 1;
                  }
                  else {
                    iVar3 = FUN_00647e40(param_3,s_Script_Resource_0072b994);
                    if (iVar3 == 0) {
                      FUN_00406a80();
                      local_4b0[0] = 7;
                      puVar5 = (undefined1 *)FUN_005493e0(param_1 + 0x74);
                      if (puVar5 == (undefined1 *)0x0) {
                        puVar5 = &DAT_0075b6e0;
                      }
                      FUN_00647d70(local_4a8,puVar5,0x200);
                      puVar5 = local_4a8;
                      local_2a9 = 0;
                      *param_2 = local_4b0[0];
                    }
                    else {
                      FUN_00406a80();
                      local_258 = 0;
                      *param_2 = 0;
                      puVar5 = local_250;
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
LAB_004ac474:
  FUN_00424770(puVar5);
  return param_2;
}

