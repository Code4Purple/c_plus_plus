const draw = require('../common/draw.js');
const constants = require('../common/constants.js');
const utils = require('../common/utils.js');

const {createCanvas} = require('canvas');
const canvas = createCanvas(400,400);
const ctx = canvas.getContext('2d');

// Moved all the constants to a separate file

const fs=require('fs');

const fileNames=fs.readdirSync(constants.RAW_DIR);
const samples=[];
let id = 1;
fileNames.forEach(fn => {
    const content = fs.readFileSync(
        constants.RAW_DIR + "/" + fn,
        'utf8'
    );
    const {session, student, drawings}=JSON.parse(content);
    for(let label in drawings){
        samples.push ({
            id, 
            label,
            student_name:student,
            student_id:session
        });

        // generate .json files
        fs.writeFileSync(
            constants.JSON_DIR+"/"+id+".json",
            JSON.stringify(drawings[label])
        );

        // generate .png files
        generateImage(
            constants.IMG_DIR+"/"+id+".png",
            drawings[label]
        );

        // print progress
        utils.printProgress(id, fileNames.length*8);
        id++;
    }
});

// sample.json generation
fs.writeFileSync (constants.SAMPLES,
    JSON.stringify(samples)
);

// sample.js generation
fs.writeFileSync(constants.SAMPLES_JS,
    "const samples="+JSON.stringify(samples)+";"
    
);

// img files creation
function generateImage (outFile, paths){
    ctx.clearRect(0,0,canvas.width,canvas.height);
    draw.paths(ctx, paths);

    const buffer = canvas.toBuffer('image/png');
    fs.writeFileSync(outFile, buffer);
};